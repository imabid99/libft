/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:38:09 by imabid            #+#    #+#             */
/*   Updated: 2021/11/03 14:04:35 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	while (s1[i])
		i++;
	i += 1;
	cpy = (char *)malloc(sizeof(char) * i);
	j = 0;
	if (cpy != NULL)
	{
		while (s1[j])
		{
			cpy[j] = s1[j];
			j++;
		}
		cpy[j] = '\0';
		return (cpy);
	}
	return (NULL);
}
