#include "./libft/libft.h"

// gcc ton ficher.c ./libft/libft.a

void ft_camoulox(char *str)
{
    int i = 0;
    int nb_a = 0;
    int nb_b = 0;
    int nb_c = 0;
    int nb_d = 0;
    
    while(str[i] != '\0') 
    {
        if (str[i]  == 'a' )
        {
            nb_a = 1;
        }
        else if (str[i] == 'b')
        {
            nb_b == 1;
        
        }
        else (str[i] == 'c' || str[i] == 'd');
        {
            nb_c || nb_d == 1;
        
        }

        i++; 
    }

    if (nb_a == 1)
    {
        ft_putstr("biquette\n");
    }

    if (nb_a == 1)
    {
      ft_putstr("ping_pong\n"); 
    }

    if (nb_a == 1)
    {
        ft_putstr("guitare\n");
    }

}
int main(void)
{
    ft_camoulox("ahahaha bonjour cod");
    return (0);
}
