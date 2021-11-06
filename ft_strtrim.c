#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int    ishere(char c, char const *str)
{
    int i = -1;
    while (str[++i])
        if (str[i] == c)
            return 1;
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int first = 0;
    int last = 0;
    int c = 0;

    if (!s1)
        return NULL;
    if (!strcmp(s1, set))
        return (strdup(""));
    while (s1[first++] && ishere(s1[first], set));
    last = strlen(s1);
    while (s1[--last] && ishere(s1[last] , set));
    if (!(str = (char *)malloc(sizeof(char) * ((last - first) + 1))))
        return NULL;
    while (s1[first] && first <= last)
        str[c++] = s1[first++];
    str[c] = '\0';
    return (str);
}

int     main()
{
    printf("str = |%s|", ft_strtrim(strdup("imgrfdgfdgim"),"imgrfdgfdgim"));
    return 0;
}