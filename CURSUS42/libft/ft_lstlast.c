/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:48:20 by lucifern          #+#    #+#             */
/*   Updated: 2022/04/09 15:58:10 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*n1 = ft_lstnew("hola");
	t_list	*n2 = ft_lstnew("adios");

	n1->next = n2;
	n2->next = NULL;
	printf("%s", ((char *)ft_lstlast(n1)->content));
	return (0);
}
*/