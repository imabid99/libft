/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:57:20 by imabid            #+#    #+#             */
/*   Updated: 2021/11/08 18:08:34 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lenght;
	char	*tab;

	i = 0;
	if (!(s))
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	lenght = ft_strlen(&s[start]);
	if (lenght >= len)
		lenght = len;
	tab = malloc(lenght + 1);
	if (!tab)
		return (0);
	while (s[start] && i < lenght)
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
