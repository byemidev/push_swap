/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:23:08 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/10 20:50:52 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_islower(unsigned int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return (uc >= 'a' && uc <= 'z');
}

int	ft_toupper(int c)
{
	if (ft_islower((unsigned int)c))
		return (c - 32);
	return (c);
}
