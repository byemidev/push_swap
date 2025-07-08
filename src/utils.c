//all utils i could be need (no one exist in libft or another .c file)

int input_isvalid(char **argv)
{
    int i;
    char c;

    if (argv[1][0] == '\0')
        return (1);
    i = 0;
    while (argv[1][i])
    {
        c = argv[1][i];
        if (!ft_isdigit(c))
            return (1);
        if (c == ' ')
            i++;
        i++;
    }
    return (0);
}

int *get_max(int arr[], int n)//pass the array and the max number of values in
{
  //getting max number of elements in the array
}

void    error_message(char *message)
{
    ft_putstr_fd(message, 2);
}
void    auto_clean(t_stacks *stacks)
{
    //free node memory of his variables
    //free stacks
}