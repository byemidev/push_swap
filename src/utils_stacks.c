/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:44:16 by garevalo          #+#    #+#             */
/*   Updated: 2025/08/14 07:46:56 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	initialize_stacks(int argc, char **argv, t_stacks *s)
{
	int	i;

	s->a_size = 0;
	s->b_size = 0;
	i = 1;
	while (i < argc)
	{
		s->a_size += ft_count_words(argv[i], ' ');
		i++;
	}
	s->a = malloc(sizeof * s->a * s->a_size);
	s->b = malloc(sizeof * s->b * s->a_size);
	if (!s->a || !s->b)
		free_and_exit_with_message(s, NULL);
}

int	is_sorted(t_stacks *s)
{
	int	i;

	if (!s || !s->a || s->a_size <= 1)
		return (1);
	i = 1;
	while (i < s->a_size)
	{
		if (s->a[i] < s->a[i -1])
			return (0);
		i++;
	}
	return (1);
}

static int	has_duplicated(t_stacks *s)
{
	int	i;
	int	j;

	i = 0;
	while (i < s->a_size)
	{
		j = i + 1;
		while (j < s->a_size)
		{
			if (s->a[i] == s->a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	exit_if_sorted_or_has_duplicated(t_stacks *s, int i)
{
	if (has_duplicated(s))
		free_and_exit_with_message(s, "Error\n");
	if (i == 0 && is_sorted(s))
		free_and_exit_with_message(s, NULL);
}

void	parse_numbers(t_stacks *s)
{
	char	**tmp;
	int		i;
	int		j;
	long	num;

	i = 0;
	j = 0;
	tmp = ft_split(s->join_args, ' ');
	if (!tmp)
		free_and_exit_with_message(s, NULL);
	while (tmp[i])
	{
		num = ft_atol(tmp[i]);
		if (num > INT_MAX || num < INT_MIN)
			free_and_exit_with_message(s, "Error\n");
		s->a[j++] = (int)num;
		free(tmp[i++]);
	}
	free(tmp);
}
