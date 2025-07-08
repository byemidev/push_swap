/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:44:13 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/17 16:42:23 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nextnode;

	if (lst && *lst)
	{
		current = *lst;
		while (current)
		{
			nextnode = current->next;
			del(current->content);
			free(current);
			current = nextnode;
		}
		*lst = NULL;
	}
}
