#ifndef RULES_H
# define RULES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_stack_node
{
	char			*content;
	struct s_stack_node	*next;
}					t_stack_node;

//push_swap
void	rotate(t_stack_node **top);
void	push(t_stack_node **top, const char *strnum);
void	swap(t_stack_node **top);
void	rrotate(t_stack_node **top);

#endif

