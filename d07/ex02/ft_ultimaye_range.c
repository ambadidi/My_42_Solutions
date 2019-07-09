#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *tab;
    i = 0;

    if(min > max)
    {
        range = ((void *)0);
        return 0;
    }
    else
    {

    tab = (int *)malloc((max - min)*sizeof(*tab));

    while(min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    *range = tab;
    return (i);
    }
}
