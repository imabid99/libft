/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:56:59 by imabid            #+#    #+#             */
/*   Updated: 2021/11/11 12:05:52 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		first = *lst;
		*lst = (*lst)-> next;
		del(first -> content);
		free(first);
	}
}
