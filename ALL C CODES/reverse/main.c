#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{int n,d,m,t,x,p,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the no. of digits");
    scanf("%d",&d);
    while(n>0){
        m=n%10;
        t=d-1;
        x=pow(10,t);
        p=m*x;
        sum=sum+p;
        n=n/10;
        d=d-1;
    }
    printf("%d",sum);
}
