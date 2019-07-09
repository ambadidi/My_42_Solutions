int	ft_str_is_printable(char *str)
{
	int tmp;
	int i;
	tmp = 0;
	i = 0;

	if(str[0] == '\0')
		return (1);
	while(str[i])
	{
		if(str[i] >= 32 && str[i] <= 126)
			tmp++;
		else
		{
			tmp = 0;
			break;
		}
		i++;
	}

	if(tmp >0)
		return (1);
	else
		return (0);
}
