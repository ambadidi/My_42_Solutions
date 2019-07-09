#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
       	int i;
	i = 0;
	while(*str != '\0')
	{
		i++;
		str++;
	}

	return(i);

}

int	main()
{
	char str[] = "toto";
	printf("%d",ft_strlen(str));

	return(0);
}
