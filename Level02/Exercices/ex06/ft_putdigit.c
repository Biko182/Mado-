#include "./libft/libft.h"

int ft_putdigit(int nb)
{
    char res = nb + 48;
    ft_putchar(res);
}

int main(void)
{
    ft_putdigit(4);
    ft_putchar('\n');
    return (0);
}
