/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:59:07 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/15 16:06:23 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

size_t	ft_nlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_fillstr(char *str, int n, size_t size, int sign)
{
	if (sign == -1)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		size--;
		str[size] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*strnum;
	size_t	sizen;
	int		sign;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	sizen = ft_nlen(n);
	strnum = malloc((sizen + 1) * sizeof(char));
	if (!strnum)
		return (NULL);
	strnum[sizen] = '\0';
	if (n == 0)
	{
		strnum[0] = '0';
		return (strnum);
	}
	sign = 1;
	if (n < 0)
	{
		sign *= -1;
	}
	ft_fillstr(strnum, n, sizen, sign);
	return (strnum);
}
/*
#include <stdio.h>
int	main()
{
	int	n = -122;
	char *str = ft_itoa(n);
	printf("%s", str);
	return (0);
}
*/
