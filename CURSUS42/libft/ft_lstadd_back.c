/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:58:33 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/09 16:14:35 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int	main(void)
{
	t_list	*n1 = ft_lstnew("hola");
	t_list	*n2 = ft_lstnew("adios");
	t_list	*new = ft_lstnew("new");

	n1->next = n2;
	n2->next = NULL;
	ft_lstadd_back(&n1, new);
	printf("%s", ((char *)ft_lstlast(n1)->content));
	return (0);
}
*/