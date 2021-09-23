#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,m,i=1,p,k,q,prod=1,count=0;
    printf("enter the number");
    scanf("%d",&n);
    while(i<101){
            p=i;
            prod=1;
            q=i;
    while(p>0){
        m=p%10;
        prod=prod*m;
        p=p/10;}}
            if(prod==n)
                count=count+1;
                 i=i+1;}
           printf("%d",count-2);}

}
