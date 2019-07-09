int	ft_iterative_factorial(int nb)
{
	int res;
	int i;
	int tmp;
	res = nb;
	i = 0;
	tmp = 1;

	if(nb < 0)
	{
		return(0);
	}
	if(nb == 0 || nb == 1)
	{
		return(1);
	}
	else
		while(i < nb - 1)
		{
			tmp = nb-(i+1);
			i++;
			res = res*tmp;
		}
	return(res);
}
