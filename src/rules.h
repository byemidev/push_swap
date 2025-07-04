#ifndef RULES_H
# define RULES_H

typedef struct s_stack_node
{
	char			*content;
	struct s_stack_node	*next;
}					t_stack_node;

rotate(t_stack_node **top);
push(t_stack_node **top, const char *strnum);

#endif

