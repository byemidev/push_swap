/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:02:04 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/13 12:40:48 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*dup;
	size_t	i;

	slen = ft_strlen(s);
	dup = (char *)malloc(slen + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		dup[i] = s[i];
		i++;
	}
	dup[slen] = '\0';
	return (dup);
}
