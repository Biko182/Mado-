#include <unistd.h>


int main(void)
{
    write(1, "Bonjour\n", 8);
    return (0);
}