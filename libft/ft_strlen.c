/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:31:26 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/15 14:17:23 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (*str)
	{
		str++;
		c++;
	}
	return (c);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*target = "hola mundo"; 
	int	expected = (int) strlen(target);
	int	myresult = (int) ft_strlen(target);

	if(myresult != expected)
		printf("error, no son iguales %d != %d\n diff = %d", 
			expected, myresult, (expected - myresult));
	else
		printf("OK, son iguales");
	return(0);
}
*/
