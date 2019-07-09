
#include <stdio.h>
unsigned int    ft_collatz_conjecture(unsigned int base)
{
    if(base != 1)
    {
        if(base % 2 == 0)
        {
            return (1 + ft_collatz_conjecture(base / 2));
        }
        else
        {
            return (1 + ft_collatz_conjecture(base * 3 + 1));
        }
    }

    return (0);

}

int main()
{
    printf("temps de vol : %d\n",ft_collatz_conjecture(15));
    printf("temps de vol : %d\n",ft_collatz_conjecture(127));

    return (0);
}
