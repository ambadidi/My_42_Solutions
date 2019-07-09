#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;
	i = 0;
	j = 0;

	while(src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';

	return (dest);
}

int main()
{
	char src[] = "toto";
	char dest[25];
	ft_strcpy(dest, src);
	printf("%s", dest);

	return 0;
}


