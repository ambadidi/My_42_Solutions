char	*ft_strcat(char *dest, char *src)
{
	int i;
	int taille;

	taille = 0;
	i = 0;

	while(dest[i])
	{
		taille++;
		i++;
	}

	i = 0;
	while(src[i])
	{
		dest[taille+i] = src[i];
		dest[taille+i+1] = '\0';
		i++;
	}

	return(dest);
}

	
