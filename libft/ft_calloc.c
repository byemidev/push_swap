/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 11:37:32 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/16 00:06:24 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*memp;

	total_size = nmemb * size;
	memp = malloc(total_size);
	if (memp == NULL)
		return (NULL);
	ft_memset(memp, 0, total_size);
	return (memp);
}
/*
#include <stdlib.h>  // Include for malloc
#include <string.h>  // Include for strcpy
#include <stdio.h> // include printf
int	main(void)
{
	char	*buff;
	buff = (char *) ft_calloc(11, sizeof(char));
	if (!buff)
		return (1);//handle fail..
	//strcpy(buff, "0123456789");
	for (size_t i = 0; i < sizeof(buff); i++)
	{
		printf("buff[%zu] : %d\n", i,(unsigned char)buff[i]);
	}
	return (0);
}
*/
