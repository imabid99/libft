/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:27:37 by imabid            #+#    #+#             */
/*   Updated: 2021/11/11 12:24:49 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	o;

	i = 0;
	j = 0;
	o = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (dstsize == 0 || i > dstsize)
		return (j + dstsize);
	else
		j += i;
	while (src[o] && i < dstsize - 1)
	{
		dst[i] = src[o];
		i++;
		o++;
	}
	dst[i] = '\0';
	return (j);
}
