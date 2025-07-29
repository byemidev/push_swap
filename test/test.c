/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:42:31 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/29 13:23:26 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	a_size;
	int	b_size;
	char	*join_args;
}				t_stacks;

int	is_array_sorted(t_stacks *s)
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

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i;

	t_stacks *s = (t_stacks *) malloc(sizeof(t_stacks));
	i = 0;
	s->a_size = 11;
	s->a =(int *) malloc(sizeof(int) * s->a_size);
	while(i < s->a_size)
	{
		s->a[i] = s->a_size -i;
		printf("%d\n", s->a[i]);
		i++;
	}
	int isSorted = is_array_sorted(s);
	printf("is sorted ?: \n%d", isSorted);
	free(s->a);
	free(s);
	return (0);
}
