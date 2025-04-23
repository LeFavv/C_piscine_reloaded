#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void    ft_print_result(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    char    *temp;
    int     i;

    i = 1;
    if (argc > 1)
    {
        while (i < argc - 1)
        {
            if (ft_strcmp(argv[i], argv[i + 1]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = temp;
                i = 1;;
            }
            else
                i++;
        }
    }
    i = 1;
    while (i < argc)
        ft_print_result(argv[i++]);
    return (0);
}