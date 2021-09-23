#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,reverse=0,t,r;
    printf("enter a number to check if it is a palindrome or not\n");
    scanf("%d",&n);
    t=n;
    while(t!=10)
    {
        reverse=reverse*10;
        r=t%10;
        reverse=reverse+r;
        t=t/10;
    }
    if(n==reverse)
        printf("%d is a palindrome number \n");
    else
        printf("%d is not a palindrome number");
}
