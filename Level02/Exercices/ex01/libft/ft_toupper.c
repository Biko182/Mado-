#include "libft.h"

void ft_toupper(char *str)
{
  int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z' )
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    ft_putstr(str);
}