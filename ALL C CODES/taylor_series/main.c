#include <stdio.h>
#include <stdlib.h>





int main()
{
    long long num[1000];
    long long i,n;
    int r;
     printf("which number of term you want to find");
    scanf("%d",&r);
    num[0]=0;num[1]=1;
    for(i=2;i<=r+1;i++){
            num[i]=num[i-2]+num[i-1];}

    printf("%lld",num[r]);

}
