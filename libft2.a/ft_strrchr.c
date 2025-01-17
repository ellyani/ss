#include "libft.h"

char *strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    if (c == 0)
    {
        return ((char *)&s[i] + i);
    }
    while (i >= 0)
    {
        if (s[i] == c)
        {
            return ((char *)&s[i] + i);
        }
        i--;
    }
    return (0);
}

