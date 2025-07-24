/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:44:16 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/24 14:57:09 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	initialize_stacks(int argc, char **argv, t_stacks *s)
{
	s->a_size = 0;
	s->b_size = 0;

	while (--argc)
	{
		if (ft_count_words(*argv + 1, ' '))
			s->a_size += ft_count_words(*argv, ' ');
		else
			s->a_size++; 
		argv++;
	}
}

int	ft_atol(const char *nbr)
{
	long sign;
	long long res;

	if (!nbr)
		return (0);
	while (*nbr == ' ' || *nbr >= 9 && *nbr <= 13)
		nbr++;
	sign = 1;
	if (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign = -1;
		nbr++;
	}
	res = 0;
	while (*nbr >= '0' && *nbr <= '9')
	{
		res = res * 10 + (*nbr - '0');
		nbr++;
	}
	res = res * sign;
	return ((int)res);
}
