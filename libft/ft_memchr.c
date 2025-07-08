/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:37:39 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/16 16:04:17 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = (const char *)s;
	while (n--)
	{
		if (*str == (const char)c)
		{
			return ((void *)str);
		}
		str++;
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s;
	s = (char *) ft_calloc(11, sizeof(char));
	strcpy(s, "0123456789");
	const char *res = (const char *) ft_memchr((const void *)s, '2', sizeof(s));
	for (size_t i = 0; i < ft_strlen(res); i++)
	{
		printf("buff[%zu] : %c\n", i, res[i]);
	}
	return (0);
}
*/
