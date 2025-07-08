/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:58:44 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/13 14:18:46 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t	size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;
	size_t	size_tocpy;
	size_t	total_len;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	total_len = slen + dlen;
	if (size <= dlen)
		return (slen + size);
	size_tocpy = size - dlen - 1;
	i = 0;
	while (src[i] && i < size_tocpy)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i + dlen] = '\0';
	return (total_len);
}
