/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:14:57 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/11 17:40:50 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	dp = (unsigned char *)dest;
	sp = (const unsigned char *)src;
	if (dp == sp || n == 0)
		return (dest);
	if (dp < sp || dp >= sp + n)
	{
		while (n--)
			*dp++ = *sp++;
	}
	else
	{
		dp += n;
		sp += n;
		while (n--)
			*(--dp) = *(--sp);
	}
	return (dest);
}
