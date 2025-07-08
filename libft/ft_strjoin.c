/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:17:14 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/14 21:24:29 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	total_size;
	char	*newstr;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	total_size = s1len + s2len;
	newstr = (char *)malloc(total_size + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1, s1len + 1);
	ft_strlcpy(newstr + s1len, s2, s2len +1);
	return (newstr);
}
