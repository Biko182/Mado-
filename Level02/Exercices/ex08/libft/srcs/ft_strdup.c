
#include "../includes/libft.h"

char *ft_strdup(char *str)
{
    char *dest;
    int length = ft_strlen(str) + 1;
    int i = 0;

    if (str == NULL)
    {       
        return(NULL);
    }

    if ((dest = malloc(sizeof(char)* length)) == NULL)
    {
        return(NULL);
    }
    while (str[i] != '\0')
    {
        dest[i] = str[i];
        i++;
    }
    return(dest);
}
