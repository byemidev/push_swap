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
		if (ft_count_words(*argv + 1, ' '))//expenting one word at least
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
	int	digit;

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
		digit = *nbr - '0';
		if (res > (LLONG_MAX - digit) / 10)
			exit_and_free_with_error_message(NULL, NULL);
		res = res * 10 + digit;
		nbr++;
	}
	res = res * sign;
	if (res > INT_MAX || res < INT_MIN)
		exit_and_free_with_error_message(NULL, NULL);
	return ((int)res);
}


