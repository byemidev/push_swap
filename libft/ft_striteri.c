/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 23:06:29 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/15 15:38:24 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ftolower(unsigned int i, char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		  *c = *c + 32;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	slen;

	if (!s)
		return ;
	i = 0;
	slen = ft_strlen(s);
	while (i < slen)
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "EstO Es UNa PruEBa";

	printf("original: %s\n", str);
	ft_striteri(str, ftolower);
	printf("resultado: %s", str);
	return (0);
}
*/
