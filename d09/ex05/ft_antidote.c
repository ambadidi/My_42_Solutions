
int     ft_antidote(int i, int j, int k)
{
    if((i < k && i < j && j < k) || (k < i && k < j && j< i))
        return (j);
    if((i < j && i < k && k < j) || (j < i && j < k && k < i))
        return (k);
    else
        return (i);
}
