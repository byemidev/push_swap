#include "rules.h"
#include <stddef.h>
#include <stdlib.h>

void push(t_stack_node **top, const char *strnum);

int main  (int argc, char **argv)
{
    t_stack_node *a_stack = NULL;

    int  i;
    if (argc == 2)
    {
        i = 0;
        while (*argv[i])
        {
            a_stack->content[i] = *argv[i];
            i++;
        }
        a_stack->content[i] = '\0';
        push(&a_stack, "8");
    }
    return (0);
}