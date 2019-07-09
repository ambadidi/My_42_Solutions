int	ft_atoi(char *str)
{
	int res;
	int sign;
	int i;
	res = 0;
	sign = 1;
	i = 0;

	if(str[0] == '-')
	{
		sign = -1;
		i++;
		for(i = 1; str[i] != '\0'; i++)
		{
			res = res*10 + str[i] - '0';
		}
		return(sign*res);
	}
	else
	{
		for(i = 0; str[i] != '\0'; i++)
		{
			res = res*10 + str[i] - '0';
		}
		return(res);
	}
}
