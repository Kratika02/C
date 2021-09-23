#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,j;
    int a[10];
    printf("how many numbers you want to arrange(max 10)");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Following numbers are arranged in ascending order");
    for(j=0;j<n;j++){
    for(i=0;i<n;i++){
        if(a[i]>a[i+1]){
                int temp;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;}

        }}

        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }



}
