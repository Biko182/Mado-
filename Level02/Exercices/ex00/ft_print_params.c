#include "./libft/libft.h"

void ft_print_params(int argc, char **argv)
{
    int i = 1;

    while(argv[i] != NULL)
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');

        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 1)// si mon nombre d'arguement n'est pas 2 (soit a./out "quelque chose")
    {
        ft_putstr("Aucun Argument\n");
        return (-1);// le programme quitte en retournant -1
    }
    
    ft_print_params(argc, argv);
    return(0);





}