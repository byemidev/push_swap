/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:07:20 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/11 17:38:23 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				pos;
	unsigned char	uc;

	pos = ft_strlen(str);
	uc = (unsigned char)c;
	if (uc == '\0')
		return ((char *)&str[pos]);
	while (pos > 0)
	{
		pos--;
		if (str[pos] == uc)
			return ((char *)&str[pos]);
	}
	return (NULL);
}
