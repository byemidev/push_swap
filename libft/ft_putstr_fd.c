/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:00:48 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/16 17:27:32 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (fd < 0)
		return ;
	else
	{
		i = -1;
		while (s[++i])
			ft_putchar_fd(s[i], fd);
	}
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd  = open("./test.txt", O_WRONLY);

	ft_putstr_fd("there is a test", fd);
	return (0);
}
*/
