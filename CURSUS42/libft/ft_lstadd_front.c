/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:14:39 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/09 13:30:55 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	**lst = NULL;
	t_list	*new = ft_lstnew("aaaa");
	t_list	*n1 = NULL;
	t_list	*n2 = NULL;

	n1->content = "hola";
	n1->next = n2;
	n2->content = "adiós";
	n2->next = NULL;
	ft_lstadd_front(lst, new);
	printf("%p", lst);
	return (0);
}
*/