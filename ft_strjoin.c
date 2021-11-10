/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:07:48 by imabid            #+#    #+#             */
/*   Updated: 2021/11/06 16:47:54 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		len;

	if (!s1 || !s2)
		return (0);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	tab = malloc(len);
	if (!tab)
		return (0);
	while (*s1)
		*tab++ = *s1++;
	while (*s2)
		*tab++ = *s2++;
	*tab = '\0';
	return (tab - len + 1);
}
