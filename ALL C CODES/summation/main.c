#include <stdio.h>
#include <stdlib.h>

int main()
{int i,t;
long int sum=0,n,total=0;
    printf("enter the number of test cases");
    scanf("%d",&t);
    for(i=0;i<t;i++){
            printf("enter the value of n");
        scanf("%ld",&n);
        if(n>10000){
        sum=n*n;
        total=(sum)%(10000000);
        printf("%ld\n",total);}
        else{
            sum=n*n;
            printf("%ld",sum);
        }
    }

}
