/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:46:50 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/11 15:48:02 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	free_and_exit_with_message(t_stacks *s, char *message)
{
	if (message == NULL)
		ft_putstr_fd("Error!\n", 2);
	else
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
	exit(EXIT_FAILURE);
}

static void	validate_args(int argc, char **argv)
{
	unsigned int	arg;
	int	i;
	int	j;

	if (argc < 2)
		free_and_exit_with_message(NULL, "Error! invalid nbr of args\n");
	i = 1; 
	while (i <= argc)
	{
		j = 0;
		if (!argv[i][0] || (argv[i][0] && argv[i][0] == ' '))
			free_and_exit_with_message(NULL, NULL);
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]) && !argv[i][j] == ' ' ||
			 !(argv[i][j] == '-' || argv[i][j] == '+' || argv[i][j  +1] == '\0'))
				free_and_exit_with_message(NULL, NULL);
			j++;
		}
		i++;
	}
}

static void	join_args(int argc, char **argv, t_stacks *s)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		//TODO: join
	}
}

void    initialize_stacks(int argc, char **argv, t_stacks *s)
{
    //TODO: while argc , take argv and initalize each one
}

int	main(int argc, char **argv)
{
	t_stacks	*s;

	validate_arguments(argc, argv);
	s = malloc(sizeof * s);
	if (s == NULL)
		exit(EXIT_FAILURE);
	initialize_stacks(argc, argv, s);
	join_args(argc, argv, s);
	parse_numbers(s);
	exit_if_sorted_or_has_duplicate(s, 0);
	create_index(s);
	if (s->a_size == 2 && s->a[0] > s->a[1])
		swap("sa", s->a, s->a_size);
	else if (s->a_size == 3)
		sort_three_elements(s);
	else if (s->a_size >= 4 && s->a_size <= 5)
		sort_four_to_five_elements(s);
	else
		radix_sort(s);
	exit_if_sorted_or_has_duplicate(s, 1);
	free_and_exit_with_message(s, NULL);
	return (EXIT_SUCCESS);
}
