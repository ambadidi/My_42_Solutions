int	ft_str_is_lowercase(char *str)
{
	int tmp;
	int i;
	i = 0;
	tmp = 0;

	if(str[0] == '\0')
		retrun (1);

	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
			tmp++;
		else if((str[i] > 32 && str[i] < 97) || str[i] > 122)
		{
			tmp = 0;
			break;
		}
		i++;
	}
	if(tmp > 0)
		return (1);
	else
		return (0);
}


