/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:20:31 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/15 20:26:36 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_aux(size_t start, size_t end, char *new, char *s)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*strtrimed;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strrchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strrchr(set, s1[end - 1]))
		end--;
	strtrimed = malloc((end - start + 1) * sizeof(char));
	if (!strtrimed)
		return (NULL);
	i = 0;
	i = ft_trim_aux(start, end, strtrimed, (char *)s1);
	strtrimed[i] = '\0';
	return (strtrimed);
}
