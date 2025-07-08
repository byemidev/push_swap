/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:31:19 by garevalo          #+#    #+#             */
/*   Updated: 2025/07/03 15:51:53 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rules

//TODO: what headers i need
#include "../libft/libft.h"
#include "../includes/push_swap.h"

//rotate the first node, claiming the last position. Eg. "0 1 2" -> "1 2 0"
void	rotate(t_stacks *stacks, char *direction, int n)
{
	char *y_up;
	char *y_down;

	y_down = "down";
	y_up = "up";
	if (ft_strcmp(direction, y_up, ft_strlen(y_up)))
	{
		//rotate
	}
	else if (ft_strcmp(direction, y_down, ft_strlen(y_down)))
	{
		//reserve rorate
	}
	else
	{
		error_message();
		clean_
	}	
}

//push the first element from one stack to another. Eg. one. a: "0 1 6 0" , after push, "1 6 0". b: "0" 
void push(t_stacks *stacks, const char *strnum)
{
}

//swap the first element & the second one in the same stack.
void	swap(t_stacks *stacks)
{
}
