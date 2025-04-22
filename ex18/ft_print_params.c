#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc > 1)
    {
        j = 0;
        while (i < argc)
        {
            while (argv[i][j])
            {
                ft_putchar(argv[i][j]);
                j++;
            }
            j = 0;
            i++;
        }
    }
    return (0);
}