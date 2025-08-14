/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 07:40:30 by garevalo          #+#    #+#             */
/*   Updated: 2025/08/14 07:47:36 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_invalid_token(char c, char next)
{
	if (!ft_isdigit(c) && c != ' ' && c != '-' && c != '+')
		return (1);
	if ((c == '-' || c == '+') && (next == '\0' || next == ' '))
		return (1);
	if ((c == '-' || c == '+') && (next == '-' || next == '+'))
		return (1);
	if (ft_isdigit(c) && (next == '-' || next == '+'))
		return (1);
	return (0);
}

char	*str_join_safe(char *s1, const char *s2, t_stacks *s)
{
	char	*tmp;

	tmp = ft_strjoin(s1, s2);
	if (!tmp)
		free_and_exit_with_message(s, NULL);
	free(s1);
	return (tmp);
}

int	count_lower(int *array, int size, int value)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		if (array[i] < value)
			count++;
		i++;
	}
	return (count);
}
