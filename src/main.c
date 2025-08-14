/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:46:50 by garevalo          #+#    #+#             */
/*   Updated: 2025/08/14 07:40:00 by garevalo         ###   ########.fr       */
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
		while (argv[i][j])
		{
			if (is_invalid_token(argv[i][j], argv[i][j + 1]))
				free_and_exit_with_message(NULL, "Error\n");
			j++;
		}
	}
}

static void	join_args(int argc, char **argv, t_stacks *s)
{
	char	*joined;
	int		i;

	i = 1;
	joined = ft_strdup("");
	if (!joined)
		free_and_exit_with_message(s, NULL);
	while (i < argc)
	{
		joined = str_join_safe(joined, argv[i], s);
		if (++i < argc)
			joined = str_join_safe(joined, " ", s);
	}
	s->join_args = joined;
}

void	create_index(t_stacks *s)
{
	int	i;
	int	*new_a;

	new_a = malloc(sizeof * new_a * s->a_size);
	if (!new_a)
		free_and_exit_with_message(s, NULL);
	i = -1;
	while (++i < s->a_size)
		new_a[i] = count_lower(s->a, s->a_size, s->a[i]);
	i = 0;
	while (i < s->a_size)
	{
		s->a[i] = new_a[i];
		i++;
	}
	free(new_a);
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
		chunk_sort(s);
	free_and_exit_with_message(s, NULL);
}
