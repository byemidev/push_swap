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

//TODO: what headers i need
#include "libft.h"
#include "stdio.h"

//rotate the first node, claiming the last position. "0 1 2" -> "1 2 0"
void	*rotate(t_stack_node **top)
{
	t_stack_node	*old_top;
	t_stack_node	*last;
	//add a copy of the first node after the lastnode.
	if (!top || !*top || !(*top)->next)
		return ;
	old_top = *top;
	last = old_top;
	while (last->next != NULL)
		last = current->next;
	last->next = old_top;
	*top = old_top->next;
	old_top->next = NULL;
}

void push(t_stack_node **top, const char *strnum)
{
	t_stack_node *new_node;

	if (!stack || !strnum) //stack doesnt exist or strnum is empty
		return ;
	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return ; //maybe i could be trowing an error, perror or EXIT_FAILURE is valid ??
	new_node->number = ft_strdup(strnum);
	if (!new_node->number)
	{
		free(new_node);
		return ;
	}
	new_node->next = *top;
	*top = new_node;
}