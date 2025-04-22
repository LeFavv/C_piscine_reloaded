int ft_sqrt(int nb)
{
    int result;

    result = 0;
    if (nb <= 0)
        return (0);
    while (result == 46340 | result * result < nb)
        result++;
    if (result * result == nb)
        return (result);
    return (0);
}
/*
#include <stdio.h>

int main(void)
{
    printf("La racine carrée de 25 est : %d\n", ft_sqrt(25));
    printf("La racine carrée de 25 est : %d\n", ft_sqrt(64));
    printf("La racine carrée de 25 est : %d\n", ft_sqrt(49));
    printf("La racine carrée de 25 est : %d\n", ft_sqrt(214748));
    return (0);
}*/