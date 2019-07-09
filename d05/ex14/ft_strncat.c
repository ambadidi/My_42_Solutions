char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int taille;
	taille = 0;
	i = 0;
	while(src[i])
	{
		i++;
	}
	if(nb > i)
		nb = i;

	i = 0;
	while(dest[i])
	{
		taille++;
		i++;
	}
	i = 0;
	while(i < nb)
	{
		dest[taille + i] = src[i];
		dest[taille +i +1] = '\0';
		i++;
	}

	return (dest);
}


