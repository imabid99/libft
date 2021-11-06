/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:56:59 by imabid            #+#    #+#             */
/*   Updated: 2021/11/05 10:38:49 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{

    while(*lst)
    {
        del((*lst) -> content);
        free(*lst);
        *lst = (*lst) -> next;
        
    }
    *lst = NULL;
}