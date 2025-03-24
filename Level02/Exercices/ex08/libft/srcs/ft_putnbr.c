#include "../includes/libft.h"

int ft_putdigit(int nb)
{
    char res = nb + 48;
    ft_putchar(res);

}

int ft_putnbr(int nb)
{
    if (nb < 0 )
    {
        ft_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 0 && nb <= 9 )
    {
        ft_putdigit(nb);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }

}