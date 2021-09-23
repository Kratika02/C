#include <stdio.h>
#include <stdlib.h>



void main(){
    int *A,num,ele,flag=0,i;
    printf("enter the no. of elements you want in the array");
    scanf("%d",&num);
    A=(int*)malloc(num*sizeof(int));
    printf("enter the elements in the array");
    for(int i=0;i<num;i++){
        scanf("%d",&A[i]);}
        printf("the elements in the array are\n");
    for(int i=0;i<num;i++){
        printf("%d ",A[i]);
    }
    printf("enter the element you want to find");
    scanf("%d",&ele);
    for(i=0;i<num;i++){
        if(A[i]==ele){
            printf("the element is found at position %d\n",i+1);
            flag=1;
        }
    }
    if(flag==0)
        printf("element is not found");



}
