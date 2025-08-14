/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:44:16 by garevalo          #+#    #+#             */
/*   Updated: 2025/08/14 07:44:29 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* doing atol safely
	if (res > (LONG_MAX - (*nbr - '0')) / 10)
	{
		if (sign == 1)
			return (LONG_MAX);
		else
			return (LONG_MIN);
	}
*/
//unsafe atol implementation.
long	ft_atol(const char *nbr)
{
	long	sign;
	long	res;

	if (!nbr)
		return (0);
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	sign = 1;
	if (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign = -1;
		nbr++;
	}
	res = 0;
	while (*nbr >= '0' && *nbr <= '9')
	{
		res = res * 10 + (*nbr - '0');
		nbr++;
	}
	return (res * sign);
}

size_t	ft_count_words(const char *str, char c)
{
	size_t	nwords;
	int		inword;

	if (!str)
		return (0);
	nwords = 0;
	inword = 0;
	while (*str)
	{
		if (*str == c)
			inword = 0;
		else if (!inword)
		{
			inword = 1;
			++nwords;
		}
		++str;
	}
	return (nwords);
}
