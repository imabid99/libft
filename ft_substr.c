/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:57:20 by imabid            #+#    #+#             */
/*   Updated: 2021/11/05 19:02:27 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*tab;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)strlen(s))
		return (strdup(""));
	if (strlen(s) <= len)
		len = (start <= strlen(s)) ? strlen(s) - start : strlen(s);
	if (!(tab = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < (int)len && s[start])
		tab[i++] = s[start++];
	tab[i] = '\0';
	return tab;
}*/

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
