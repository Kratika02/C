#include <stdio.h>
#include <stdlib.h>

struct Array{
int *A;
int length;
int size;
};

void display(struct Array arr){
int i;
printf("displaying values\n");
for(i=0;i<arr.length;i++){
    printf("%d\n",arr.A[i]);
}
}
void append(struct Array *arr,int num){
    arr->A[arr->length]=num;

}


int main()
{
    struct Array arr={{1,2,3,4,5},5,10};
    int n,i;
    append(&arr,78);
    display(arr);

}
