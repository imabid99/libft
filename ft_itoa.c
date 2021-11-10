/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 09:03:01 by imabid            #+#    #+#             */
/*   Updated: 2021/11/06 12:11:29 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numlen(int nb)
{
	int	i;

	i = 1;
	nb /= 10;
	while (nb)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*tab;
	long	nb;

	nb = n;
	len = numlen(nb);
	if (nb < 0 && len++)
		nb *= -1;
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	tab[len] = '\0';
	while (len >= 0)
	{
		tab[--len] = nb % 10 + '0';
		if (nb == 0)
			break ;
		nb /= 10;
	}
	if (n < 0)
		tab[0] = '-';
	return (tab);
}
