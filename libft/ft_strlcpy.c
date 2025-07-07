/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:31:07 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/11 17:43:02 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	pos;

	pos = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (src[pos] && pos < (size - 1))
	{
		dest[pos] = src[pos];
		pos++;
	}
	if (size > 0)
		dest[pos] = '\0';
	while (src[pos])
		pos++;
	return (pos);
}
