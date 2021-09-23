#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,m;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<100;i++){
    m=n%i;
    if(m==0){
            printf("it is not a prime number");
            break;
  }
  else
    printf("it is a prime number");
}}
