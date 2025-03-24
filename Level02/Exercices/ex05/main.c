#include "./libft/libft.h"

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

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        ft_putstr("3 arguments required\n");
        return (-1);
    }
    int res = 0;
    res = ft_strcmp(argv[1], argv[2]);
    if (res == 0)
    {
        ft_putstr("Les chaines sont identiques\n");
    }
    else if (res < 0)
    {
        ft_putstr("Au moins une des chaines est NULL\n");
    }
    else
    {
        ft_putstr("Les chaines sont différentes\n");
    }
    return (0);
}