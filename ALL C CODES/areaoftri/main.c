#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n,m,q=0,a=0,sum=0,count;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the no.of digits");
    scanf("%d",&count);
    while(n>0){
    m=n%10;
    q=pow(10,count);
    a=m*q;
    sum=sum+a;
    n=n/10;
    count=count-1;
    }
    printf("%d",sum);


}
