#ifndef RULES_H
# define RULES_H

typedef struct s_stack_node
{
	char			*content;
	struct s_stack_node	*next;
}					t_stack_node;

//push_swap
rotate(t_stack_node **top);
push(t_stack_node **top, const char *strnum);
swap(t_stack_node **top);
rrotate(t_stack_node **top);

#endif

