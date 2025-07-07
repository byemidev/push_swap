/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:23:21 by garevalo          #+#    #+#             */
/*   Updated: 2025/04/17 19:39:50 by garevalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*lst2_sub;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	lst2 = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		lst2_sub = ft_lstnew(new_content);
		if (!lst2_sub)
		{
			del(new_content);
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, lst2_sub);
		lst = lst->next;
	}
	return (lst2);
}
