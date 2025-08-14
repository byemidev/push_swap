/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 07:39:37 by garevalo          #+#    #+#             */
/*   Updated: 2025/08/14 07:49:15 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	find_max_pos(int *arr, int size)
{
	int	i;
	int	pos;

	pos = 0;
	i = 1;
	while (i < size)
	{
		if (arr[i] > arr[pos])
			pos = i;
		i++;
	}
	return (pos);
}

static void	push_chunks_to_b(t_stacks *s, int chunk)
{
	int	limit;
	int	pushed;

	limit = chunk;
	pushed = 0;
	while (s->a_size)
	{
		if (s->a[0] < limit)
		{
			push("pb", s);
			pushed++;
			if (s->b[0] < limit - chunk / 2)
				rotate(s->b, s->b_size, "up", "b");
		}
		else
			rotate(s->a, s->a_size, "up", "a");
		if (pushed == limit)
			limit += chunk;
	}
}

static void	pull_back_to_a(t_stacks *s)
{
	int	pos;

	while (s->b_size)
	{
		pos = find_max_pos(s->b, s->b_size);
		while (pos && pos <= s->b_size / 2)
		{
			rotate(s->b, s->b_size, "up", "b");
			pos--;
		}
		while (pos && pos > s->b_size / 2)
		{
			rotate(s->b, s->b_size, "down", "b");
			pos = (pos + 1) % s->b_size;
		}
		push("pa", s);
	}
}

void	chunk_sort(t_stacks *s)
{
	int	chunk;

	chunk = (s->a_size / 5) + 1;
	push_chunks_to_b(s, chunk);
	pull_back_to_a(s);
}
