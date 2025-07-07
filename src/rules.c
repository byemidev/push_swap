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
#include "rules.h"

//rotate the first node, claiming the last position. Eg. "0 1 2" -> "1 2 0"
void	rotate(t_stack_node **top)
{
	t_stack_node	*old_top;
	t_stack_node	*last;
	//add a copy of the first node after the lastnode.
	if (!top || !*top || !(*top)->next)
		return ;
	old_top = *top;
	last = old_top;
	while (last->next != NULL)
		last = old_top->next;
	last->next = old_top;
	*top = old_top->next;
	old_top->next = NULL;
}

//push the first element from one stack to another. Eg. one. a: "0 1 6 0" , after push, "1 6 0". b: "0" 
void push(t_stack_node **top, const char *strnum)
{
	t_stack_node *new_node;

	if (!top || !strnum) //stack doesnt exist or strnum is empty
		return ;
	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return ; //maybe i could be trowing an error, perror or EXIT_FAILURE is valid ??
	new_node->content = ft_strdup(strnum);
	if (!new_node->content)
	{
		free(new_node);
		return ;
	}
	new_node->next = *top;
	*top = new_node;
}

//swap the first element & the second one in the same stack.
void	swap(t_stack_node **top)
{
	t_stack_node	*old_top;
	t_stack_node	*nextone;

	if (!top || !*top || !(*top)->next)
		return ;
	old_top = *top;
	nextone = old_top->next;
	old_top->next = nextone->next;
	nextone->next = old_top;
	*top = nextone;
}

//rotate the last node to the first node
void	rrotate(t_stack_node **top)
{
	t_stack_node	*prev;
	t_stack_node	*bottom;

	if (!top || !*top || !(*top)->next)
		return ;
	prev = NULL;
	bottom = *top;
	while (bottom->next)
	{
		prev = bottom;
		bottom = bottom->next;
	}
	prev->next = NULL;
	bottom->next = *top;
	*top = bottom;
}