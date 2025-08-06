/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:46:50 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/31 13:39:27 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_and_exit_with_message(t_stacks *s, char *message)
{
	if (message != NULL)
		ft_putstr_fd(message, 2);
	if (s != NULL)
	{
		if (s->a)
			free(s->a);
		if (s->b)
			free(s->b);
		if (s->join_args)
			free(s->join_args);
		free(s);
	}
	if (message != NULL)
		exit(EXIT_FAILURE);
	else
		exit(EXIT_SUCCESS);
}

static void	validate_arguments(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc < 2)
		free_and_exit_with_message(NULL, "");
	while (++i < argc)
	{
		j = 0;
		if (!argv[i][0] || (argv[i][0] && argv[i][0] == ' '))
			free_and_exit_with_message(NULL, NULL);
		while (argv[i][j] != '\0')
		{
			if ((!(ft_isdigit(argv[i][j])) && (argv[i][j] != ' ')
			&& (argv[i][j] != '-' && argv[i][j] != '+' && argv[i][j] != ' '))
			|| (argv[i][j] == '-' && argv[i][j + 1] == '\0')
			|| (argv[i][j] == '+' && argv[i][j + 1] == '\0')
			|| (argv[i][j] == '-' && argv[i][j + 1] == ' ')
			|| (argv[i][j] == '+' && argv[i][j + 1] == ' '))
				free_and_exit_with_message(NULL, "Error\n");
			j++;
		}
	}
}

static void	join_args(int argc, char **argv, t_stacks *s)
{
	char	*joined;
	char	*tmp;
	int		i;

	i = 1;
	joined = ft_strdup("");
	if (!joined)
		free_and_exit_with_message(s, NULL);
	while (i < argc)
	{
		tmp = ft_strjoin(joined, argv[i]);
		if (!tmp)
			free_and_exit_with_message(s, NULL);
		free(joined);
		joined = tmp;
		if (++i < argc)
		{
			tmp = ft_strjoin(joined, " ");
			if (!tmp)
				free_and_exit_with_message(s, NULL);
			free(joined);
			joined = tmp;
		}
	}
	s->join_args = joined;
}

int	main(int argc, char **argv)
{
	t_stacks	*s;

	validate_arguments(argc, argv);
	s = malloc(sizeof * s);
	if (s == NULL)
		exit(EXIT_FAILURE);
	s->a = NULL;
	s->b = NULL;
	s->join_args = NULL;
	initialize_stacks(argc, argv, s);
	join_args(argc, argv, s);
	parse_numbers(s);
	exit_if_sorted_or_has_duplicated(s, 0);
	create_index(s);
	if (s->a_size == 2 && s->a[0] > s->a[1])
		swap("sa", s->a, s->a_size);
	else if (s->a_size == 3)
		sort_three_elements(s);
	else if (s->a_size >= 4 && s->a_size <= 5)
		sort_four_to_five_elements(s);
	else if (s->a_size > 5)
		radix_sort(s);
	free_and_exit_with_message(s, NULL);
}
