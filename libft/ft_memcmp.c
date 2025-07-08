/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:52:14 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/16 16:20:33 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1p;
	const unsigned char	*s2p;

	if (n == 0)
		return (0);
	s1p = (const unsigned char *)s1;
	s2p = (const unsigned char *)s2;
	while (n--)
	{
		if (*s1p != *s2p)
			return ((int)(*s1p - *s2p));
		s1p++;
		s2p++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1;
	char	*s2;
	int	diff;

	s1 = (char *) ft_calloc(11, sizeof(char));
	s2 = (char *) ft_calloc(15, sizeof(char));
	strcpy(s1, "0123456789");
	strcpy(s2, "01234567890000");
	diff = 0;
	diff = ft_memcmp((const void*)s1, (const void *)s2, sizeof(s2));
	printf("result btween %s & %s:\n%d",s1, s2, diff);
	return(0);
}
*/
