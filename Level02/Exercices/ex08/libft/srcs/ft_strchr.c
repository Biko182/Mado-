#include "../includes/libft.h"

// gcc ton ficher.c ./libft/libft.a

int ft_strchr(char *str, char c)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == c)
        {
            return(1);
        }
    i++;
    }
    return(0);
}
