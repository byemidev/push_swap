/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:51:43 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/15 15:39:00 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	ftoupper(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
		
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			slen;
	char			*new;
	unsigned int	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	new = malloc((slen + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = -1;
	while (++i < slen)
	{
		new[i] = f(i, s[i]);
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>
int	main()
{
	char	*s = "Esto EsunaPrueba";
	char	*res;
	
	res = ft_strmapi(s, ftoupper);
	if (!res)
		return (1);
	printf("original: %s\n", s);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/
