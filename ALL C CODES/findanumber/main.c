#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i;
  int a[5]={3,69,56,32,100};
  printf("enter the number you want to search");
  scanf("%d",&n);
  for(i=0;i<5;i++){
    if(a[i]==n){
        printf("%d is found at %d position ",n,i+1);
        break;
    }
  }
  if(i==5){
  printf("Number not found");}
}
