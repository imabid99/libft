/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:31:37 by imabid            #+#    #+#             */
/*   Updated: 2021/11/11 10:35:23 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*head;
	t_list		*node;
	t_list		*temp;

	if (!lst)
		return (NULL);
	head = NULL;
	temp = lst;
	while (temp)
	{
		node = ft_lstnew(f(temp->content));
		if (!node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		temp = temp->next;
	}
	return (head);
}
