/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:31:37 by imabid            #+#    #+#             */
/*   Updated: 2021/11/05 16:13:57 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;

    new_list = (t_list *)malloc(sizeof(t_list));
    if(!new_list)
        return NULL;
    while(lst)
    {
        f((lst) -> content);
        lst = lst -> next;
        del(lst -> content);
    }
    new_list = lst;
    return new_list;
}