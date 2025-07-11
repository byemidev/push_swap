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

void	free_and_exit_with_message(t_stack *s, char *message)
{
	if (!message)
		ft_putstr_fd("Error!", 2);
	else
		ft_putstr_fd(message, 2);
	//freeing stack and trowing a message using 2 as stdoutoput.
}

static void	validate_args(int argc, char **argv)
{
	int	arg;
	unsigned int	i;

	//validation input and data needed.
	if (argc < 2)
		free_and_exit_with_message("Error! invalid nbr of args", NULL);
	i = 0; 
	while (*argv[i])
	{
		arg = ft_atoi(*argv[i++]);
		if (!arg)
			free_and_exit_with_message("Error! arg invalid", NULL);
	}

}

static void	join_args(int argc, char **argv, t_stacks *s)
{
	//joins args
}

int	main(int argc, char **argv)
{
	t_stacks	*s;

	validate_arguments(argc, argv);
	s = malloc(sizeof * s);
	if (s == NULL)
		exit(1);
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
	free_and_exit_with_message(s, "Error\n");
	return (0);
}
