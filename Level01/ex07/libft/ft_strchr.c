#include "./libft/libft.h"

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
int main(int ac, char **av)
{
    int nb = 0;
    nb = ft_strchr(av[1], '1');
    if (nb == 1)
    {
        ft_putstr("la chaine possede le char\n");

    } 
    else
    {
        ft_putstr("pas trouve\n");
    }
    return (0);
}
