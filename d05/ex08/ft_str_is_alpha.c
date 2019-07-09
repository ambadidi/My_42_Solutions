int	ft_str_is_alpha(char *str)
{
	int i;
	int tmp;
	tmp = 0;
	i = 0;

	if(str[0] == '\0')
		return (1);

	while(str[i])
	{
		
		if((str[i] > 32 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			tmp++;
		i++;
		
	}
	if(tmp > 0)
		return (0);
	else
		return (1);
}


