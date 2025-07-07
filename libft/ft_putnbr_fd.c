/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:44:06 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/15 22:09:10 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd < 0)
		return ;
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n / 10 > 0)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd = open("./test.txt", O_WRONLY);

	ft_putnbr_fd(INT_MIN, fd); //valid
	ft_putnbr_fd(INT_MIN + 1, fd); //valid
	ft_putnbr_fd(0, fd); //valid
	ft_putnbr_fd(00000, -1); //invalid fd
	return (0);
}
*/
