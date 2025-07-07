/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:37:11 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/15 23:33:59 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str++ = 0;
	}
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char buff[11];

	strcpy(buff, "0123456789");
	ft_bzero((void *)buff, sizeof(buff));
	for(size_t i = 0; i < sizeof(buff); i++)
	{
		printf("buff[%zu] = %d\n", i, (unsigned char)buff[i]);
	}
	return (0);
}
*/
