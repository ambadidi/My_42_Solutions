#ifndef __FT_BOOLEAN_H__
# define __FT_BOOLEAN_H__

#include <unistd.h>
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG "J'ai un nombre pair d'arguments.\n"
# define ODD_MSG "J'ai un nombre impair d'arguments.\n"
# define EVEN(x) (x % 2 == 0)
void    ft_putstr(char *str);
typedef int t_bool;

#endif
