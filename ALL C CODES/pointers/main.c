#include <stdio.h>
#include <stdlib.h>

void main()
{
    double a;
    double*p1;
    p1=&a;
     printf("address of a=%u",p1);
     p1++;
    printf("address of a=%u",p1);


}
