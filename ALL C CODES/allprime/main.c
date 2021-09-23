#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,n,m,num;
 printf("enter the value of n");
 scanf("%d",&num);
 for(n=2;n<num;n++){
 for(i=2;i<n;i++){
     m=n%i;
     if(m==0){

        break;
     }

 }
 if(i==n){
    printf("%d\n",n);
 }
 }




}
