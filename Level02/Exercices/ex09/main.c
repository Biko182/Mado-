
#include "./libft/includes/libft.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        ft_putstr("1 argument required\n");
        return (-1);
    }
    char *test;

    test = ft_strjoin(argv[1], argv[2]);
    ft_putstr(test);
    ft_putchar('\n');
    free(test);
    return (0);
}