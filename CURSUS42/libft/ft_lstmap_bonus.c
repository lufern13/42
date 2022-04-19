/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:08:17 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/09 19:14:43 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*head;
	void	*content;

	if (!lst)
		return (NULL);
	content = f(lst->content);
	new_lst = ft_lstnew(content);
	if (!new_lst)
		return (del(content), NULL);
	head = new_lst;
	lst = lst->next;
	while (lst != NULL)
	{
		content = f(lst->content);
		new_lst->next = ft_lstnew(content);
		if (!new_lst->next)
			return (ft_lstclear(&new_lst, del), NULL);
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (head);
}
