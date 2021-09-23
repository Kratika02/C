#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j,n;
    int num[5];
    printf("enter the numbers");

    for(j=0;j<5;j++){
    scanf("%d",&num[j]);}

    printf("enter the number to be searched ");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        if(n==num[i]){
            printf("element found");
            break;}

    }
    if(i==5){
        printf("element not found");}



}
