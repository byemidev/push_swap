/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:55:34 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/14 23:59:27 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = 0;
	while (i < 127)
	{
		if (ft_isdigit(i))
			printf("%c", i);
		i++;
	}
	return (0);
}
*/
