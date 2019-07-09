#include <stdio.h>
#include <unistd.h>
void    ft_takes_place(int hour)
{
    if(hour == 0 || hour == 24)
        printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M AND 1.00 A.M\n");

    

    if(hour > 0 && hour < 11)
        printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M AND %d A.M\n", hour,(hour+1));

    if(hour == 11)
        printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M AND 12.00 P.M\n");

    
    if(hour == 12)
        printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M AND 1.00 P.M\n");

    if(hour > 12 && hour < 23)
        printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M AND %d P.M\n", hour - 12,(hour+1) - 12);

    
    if(hour == 23)
        printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M AND 12.00 A.M\n");

   if(hour > 24)
       printf("error\n");
}

