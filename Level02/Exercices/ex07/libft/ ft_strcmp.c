#include "libft.h"

int ft_strcmp(char *str1, char *str2)
{ 
   int i = 0;

    if (!str1 || !str2)  
    {
        return (-1);
    }

    while (str1[i] != '\0')
    {
       if (str1[i] != str2[i])
       {
        return (str1[i] - str2[i]);
       }
        i++;
    }
    return (0);  
}
