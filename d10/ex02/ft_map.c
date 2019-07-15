int     *ft_map(int *tab, int length, int(*f)(int))
{
    int *retab;
    int i;
    i = 0;

    retab = (int *)malloc(sizeof(*tab) * length);
    
    while(i < length)
    {
        retab = f(tab[i]);
        i++;
    }

    return (retab);
}
