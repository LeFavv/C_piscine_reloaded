int ft_iterative_factorial(int nb)
{
    int nb2;

    nb2 = nb - 1;
    if (nb < 0 || nb >= 14)
        return (0);
    if (nb <= 1)
        return (1);
    while (nb2)
    {
        nb = nb * nb2;
        nb2--;
    }
    return (nb);
}
/*
#include <stdio.h>

int main(void)
{
    printf("La factorielle de 5 : %d\n", ft_iterative_factorial(5));
    printf("La factorielle de 7 : %d\n", ft_iterative_factorial(7));
    printf("La factorielle de 10 : %d\n", ft_iterative_factorial(10));
    printf("La factorielle de 32 : %d\n", ft_iterative_factorial(32));
    return (0);
}*/