#include <stdlib.h>
int     *ft_range(int min, int max)
{
    int i;
    int *tab;
    i = 0;

    if(min >= max)
        return (0);
    
    tab = (int *)malloc((max - min)*sizeof(*tab));

    while(min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }

    return (tab);

}
