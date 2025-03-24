#include "../includes/libft.h"

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    if (dest == NULL || src == NULL )
    {
        return (NULL);
    }

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return(dest);
}
