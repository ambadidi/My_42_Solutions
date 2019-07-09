char	*ft_strcapitalize(char *str)
{
	int i;
	i = 0;

	while((str[i] >= 32 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 126) || str[i])
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
	
			while(str[i+1] >= 97 && str[i+1] <= 122)
				i++;
			
		}
	
		i++;
	}
	
	i = 0;
	while(str[i])
	{
		if(str[i] >= 48 && str[i] <= 57 && str[i+1] >= 65)
			str[i+1] = str[i+1] + 32;
		i++;
	}


	

	return(str);
}
