#include "../includes/libft.h"

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
 if (dest == NULL || src == NULL )
    {
        return (NULL);
    }
while (dest[i] != '\0')
    {
        i++;
    }
while (src[j] != '\0' )
    {
       dest[i] = src[j];
    
        i++;
        j++;
    }

    dest[i] = '\0';

    return(dest);
}
