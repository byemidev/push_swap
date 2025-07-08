/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:52:35 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/14 23:55:00 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = 32;

	while (i < 127)
	{
		if(ft_isalpha(i))
			printf("%c", i);
		i++;
	}
	return (0);
}
*/
