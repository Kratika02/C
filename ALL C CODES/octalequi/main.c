#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,p,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        m=n%8;
        sum=sum*10+m;
        n=n/8;
    }
    while(sum>0){
        p=sum%10;
        printf("%d",p);
        sum=sum/10;
    }

}
