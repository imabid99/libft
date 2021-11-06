#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*tab;
	int		len;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	else if (!s1 && s2)
		return ((char *)s2);
	else if (!s2 && s1)
		return ((char *)s1);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	tab = (char *)malloc(sizeof(char) * len);
	if (!tab)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	while (s2[j])
		tab[i++] = s2[j++];
	tab[i] = '\0';
	return (tab);
}