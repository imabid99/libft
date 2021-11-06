#include "libft.h"
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char	tmp;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	len -= 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	// str[i] = '\0';
	return (str);
}

char *ft_itoa(int n)
{
    int i;
    int j;
    char *tab;
    char *cpy;
    long nb;
    nb = n;
    j = 1;
    i = 0;
    if (nb < 0)
    {
        nb *= -1;
        i++;
    }
    i = j;
    if(!(tab = (char *)malloc(sizeof(char) * i + 1)))
        return NULL;
    tab[i++] = nb % 10 + '0';   
    while(nb /= 10)
    {
        tab[i] = nb % 10 + '0';
        i++;
    }
    cpy = ft_strrev(tab);
    return cpy;
}
int main()
{
    printf("%s",ft_itoa(-420));
}