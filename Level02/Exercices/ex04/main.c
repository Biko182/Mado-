#include "./libft/libft.h"

int main(char *dest, char *src)
{
    char test[100] = "ceci est un ";
    ft_strcat(test, "test voir si ca marche\n");
    ft_putstr(test);
    ft_putchar('\n');
    return (0);
}