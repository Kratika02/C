#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *A,size,i,num,length;

    printf("enter the size of array\n");
    scanf("%d",&size);
    A=(int*)malloc(size*sizeof(int));
    printf("how many numbers you want to enter\n");
    scanf("%d",&length);
    printf("enter the numbers\n");
    for(i=0;i<length;i++){
        scanf("%d",&A[i]);
    }
    printf("the numbers are:");
    for(i=0;i<length;i++){
        printf("%d",A[i]);
    }
// Addition of element in the array
    printf("enter the number you want to add in this array\n");
    scanf("%d",&num);
    A[length]=num;
    length=length+1;
    printf("the numbers are: ");
    for(i=0;i<length;i++){
        printf("%d ",A[i]);
    }
// Inserting an element in the array
    int x,index;
    printf("enter the number you want to insert");
    scanf("%d",&x);
    printf("write the index where you want to insert the number");
    scanf("%d",&index);
    if(index<length){
        for(i=length;i>index;i--){
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
    printf("the numbers are: ");
    for(i=0;i<length;i++){
        printf("%d ",A[i]);
    }

}
