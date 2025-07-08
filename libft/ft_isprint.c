/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:59:29 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/15 12:15:05 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = -1;
	while (i < 127)
	{
		if(ft_isprint(i))
			printf("%c", i);
		i++;
	} 
	return (0);
}
*/
