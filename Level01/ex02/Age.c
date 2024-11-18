#include <unistd.h>

void ft_limite (int age)
{

  if (age >= 18) 
    {
        write(1, "oui\n", 5);
    }
    else if (age < 18) 
    {
        write(1, "non\n", 5);
    }

}
int main(void)
{
    int nombre = 19;

    ft_limite(nombre);

    ft_limite(5);
    
    return (0);
}
