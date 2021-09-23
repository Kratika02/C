#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int marks[],int size,int element){
    int i;
    for(i=0;i<size;i++){
            if(marks[i]==element)
               return i;}
               return -1;
}

int main()
{
    int marks[]={12,43,52,79,28,90,17};
    int a;
    a=LinearSearch(marks,7,17);
    printf("%d",a);
}
