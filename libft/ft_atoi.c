/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:16:00 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/13 11:39:06 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	if (nptr[i] == '\0')
		return (0);
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign *= -1;
	}
	res = 0;
	while (ft_isdigit((int)nptr[i]))
	{
		res = res * 10 + (nptr[i] - '0' );
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	int	res0 = ft_atoi("	      -1234&8877 n");
	printf("result : %d\n", res0);
	return (0);
}
*/
