/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:51:54 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/15 12:09:53 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = -1;
	while (i < 530)
	{
		if (ft_isascii(i))
			printf("%c", i);
		i++;
	}
	return (0);
}
*/
