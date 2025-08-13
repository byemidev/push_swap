/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:05:39 by garevalo          #+#    #+#             */
/*   Updated: 2025/08/07 13:44:09 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three_elements(t_stacks *s)
{
	if (s->a[0] > s->a[1] && s->a[1] < s->a[2] && s->a[2] > s->a[0])
		swap("sa", s->a, s->a_size);
	else if (s->a[0] > s->a[1] && s->a[1] > s->a[2] && s->a[2] < s->a[0])
	{
		swap("sa", s->a, s->a_size);
		rotate(s->a, s->a_size, "down", "a");
	}
	else if (s->a[0] > s->a[1] && s->a[1] < s->a[2] && s->a[2] < s->a[0])
		rotate(s->a, s->a_size, "up", "a");
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2] && s->a[2] > s->a[0])
	{
		swap("sa", s->a, s->a_size);
		rotate(s->a, s->a_size, "up", "a");
	}
	else if (s->a[0] < s->a[1] && s->a[1] > s->a[2] && s->a[2] < s->a[0])
		rotate(s->a, s->a_size, "down", "a");
}

void	sort_four_to_five_elements(t_stacks *s)
{
	int	min;
	int	min_pos;
	int	i;

	while (s->a_size > 3)
	{
		min = s->a[0];
		min_pos = 0;
		i = 1;
		while (i < s->a_size)
		{
			if (s->a[i] < min)
			{
				min = s->a[i];
				min_pos = i;
			}
			i++;
		}
		while (min_pos > 0)
		{
			rotate(s->a, s->a_size, "up", "a");
			min_pos--;
		}
		push("pb", s);
	}
	sort_three_elements(s);
	while (s->b_size > 0)
		push("pa", s);
}


