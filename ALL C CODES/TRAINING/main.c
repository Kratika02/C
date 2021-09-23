#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sum,divd,sub,avg,mul;
    printf("enter any two numbers=\n");
    scanf("%d %d",&n1,&n2);
    sum=n1+n2;
    printf("\nThe sum of %d and %d is %d",n1,n2,sum);
    sub=n1-n2;
    printf("\nThe subtraction of A=%d and B=%d is %d",n1,n2,sub);
    divd=n1/n2;
    printf("\nThe division of A=%d and B=%d is %d",n1,n2,divd);
    mul=n1*n2;
    printf("\nThe multiplication of A=%d and B=%d is %d",n1,n2,mul);
    avg=(n1+n2)/2;
    printf("\nThe average of A=%d and B=%d is %d",n1,n2,avg);
}
