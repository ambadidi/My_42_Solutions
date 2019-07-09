int	ft_iterative_power(int nb, int power)
{
	int tmp;
	int res;
	int i;
	i = 1;
	res =1;
	tmp = 1;

	if(power < 0)
		return(0);
	if(power == 0)
		return(1);
	if(power == 1)
		return(nb);
	while(i <= power)
	{
		tmp = nb;
		res = res*tmp;
		i++;
	}
	return(res);
}
