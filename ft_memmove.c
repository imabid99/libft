/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:47:12 by imabid            #+#    #+#             */
/*   Updated: 2021/11/05 17:17:35 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srcc;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (dest > srcc)
	{
		while (len)
		{
			len--;
			dest[len] = srcc[len];
		}
	}
	else
		while (i < len)
		{
			dest[i] = srcc[i];
			i++;
		}
	return (dest);
}
