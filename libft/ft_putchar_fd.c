/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:55:31 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/16 17:28:09 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd = open("./test.txt", O_WRONLY);

	ft_putchar_fd('b', fd);
	close(fd);
	return (0);
}
*/
