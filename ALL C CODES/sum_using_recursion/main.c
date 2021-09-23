#include <stdio.h>
#include <stdlib.h>

int fun(int n){
    if(n==0)
        return 1;
    return fun(n-1)*n;
}


int main()
{
    int n,r;
    printf("enter the value of n");
    scanf("%d",&n);
    r=fun(n);
    printf("%d",r);
}
