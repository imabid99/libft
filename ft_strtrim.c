/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:53:27 by imabid            #+#    #+#             */
/*   Updated: 2021/11/11 10:32:21 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ishere(char c, char const *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		first;
	int		last;
	int		c;

	first = 0;
	c = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[first] && ishere(s1[first], set))
		first++;
	last = ft_strlen(s1) - 1;
	while (s1[last] && ishere(s1[last], set))
		last--;
	if (last < first)
		return (ft_strdup(""));
	str = malloc(last - first + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + first, last - first + 2);
	return (str);
}
