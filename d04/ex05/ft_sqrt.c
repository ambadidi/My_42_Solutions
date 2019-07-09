int	ft_sqrt(int nb)
{
	int res;
	int i;
	res = 1;
	i = 0;
	
	if(nb <= 0)
		return 0;
	while(i < 100)
	{
		i++;
		res = (res + nb/res)/2;
	}

	if( res*res != nb)
		return 0;
	return res;

}
