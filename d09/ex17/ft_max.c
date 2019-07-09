#include <stdio.h>
#include <string.h>
int     ft_max(int *tab, int length)
{
    int i;
    int max;
    
    i = 0;

    max = tab[i];
    while(i < length)
    {
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);

}
int main()
{
    int tab[] = {1, 2, 3, 45, 8, 9,11, 46};

    printf("%d", ft_max(tab,8));

    return (0);

}
