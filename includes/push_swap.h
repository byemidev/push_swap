#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_stacks
{
        int     a;
        int     b;
        char    *content;
        struct t_stacks     *next;
}                                       t_stacks;

//push_swap
void    rotate(t_stacks *stacks, char *direction, int n);
void    push(t_stacks *stacks, int n);
void    swap(t_stacks *stacks);

#endif
