#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float f1,f2,sum2;
    double sum;

    printf("Enter Float number= \n");
    scanf("%f",&f1);
     printf("Enter Float number= \n");
    scanf("%f",&f2);
    printf("\n Float value is %f",f1);
     printf("\n Float value is %f",f2);
    a=(int)(f1+0.5);
    b=(int)(f2+0.5);
    printf("\nInt value is %d",a);
    printf("\nInt value is %d",b);

}
