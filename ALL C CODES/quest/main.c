#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,fact=1;
    printf("enter the number to calculate its factorial:");
    scanf("%ld",&n);
    if(n==0){

            printf("the factorial of 0 is 1");

    }
    else{
        while(n>0){
            fact=fact*n;
            n--;
        }
    }
    printf("the factorial is %lld",fact);
    return 0;


}
