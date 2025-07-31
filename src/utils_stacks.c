/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:44:16 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/31 14:01:17 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	initialize_stacks(int argc, char **argv, t_stacks *s)
{
	s->a_size = 0;
	s->b_size = 0;

	while (--argc)
	{
		if (ft_count_words(*argv + 1, ' '))
			s->a_size += ft_count_words(*argv, ' ');
		else
			s->a_size++; 
		argv++;
	}
}

static int	is_sorted(t_stacks *s)
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
	while (s->a[i] != '\0')
	{
		j = 0;
		while (s->a[j] != '\0')
		{
			if (s->a[i] == s->a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	stack_empty(int *stack)
{
	return (stack == NULL);
}

//prints in stdout (2) an error message
void		exit_if_sorted_or_has_duplicated(t_stacks *s, int i)
{
	if (!s)
		free_and_exit_with_message(NULL, NULL);
	if (has_duplicated(s))
		free_and_exit_with_message(s, NULL);
	if (is_sorted(s) && stack_empty(s->b))
		free_and_exit_with_message(s, NULL);
	if (i < 0)
		free_and_exit_with_message(s, NULL);
}
