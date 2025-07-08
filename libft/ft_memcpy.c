/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:47:26 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/16 00:33:15 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	dp = (char *)dest;
	sp = (const char *)src;
	if (dp == sp || n == 0)
		return (dest);
	while (n--)
	{
		*dp++ = *sp++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	const char src[] = "cinco";
	char dest0[4];//bad
	ft_memcpy(dest0, src, ft_strlen(src) + 1);
	for(int i = 0; i < ft_strlen(dest0) + 1; i++)
	{
		printf("%d\n",(unsigned char) dest0[i]);
	}
	return (0);
}
*/
