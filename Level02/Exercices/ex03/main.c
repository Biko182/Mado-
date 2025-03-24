#include "./libft/libft.h"

int main(char* dest, char* src)
{
    char test[50] = {0};
    test = ft_strcpy(test, "test voir si ca marche\n");
    ft_putstr(test);
    ft_putchar('\n');
    return (0);
}