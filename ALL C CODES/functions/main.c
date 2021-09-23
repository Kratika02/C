#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m=1,i;
    printf("enter the number whose factorial you want to find\n");
    scanf("%d",&n);
    if(n>0){
    for(i=n;i>1;i--){
        m=m*i;
    }
    printf("%d",m);}
    else
         printf("factorial of negative number not possible");
}
