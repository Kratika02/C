#include <stdio.h>
#include <stdlib.h>


void indDelete(int marks[],int index,int size){
    int i;
    for(i=index;i<size-1;i++){
        marks[i]=marks[i+1];
        }
}

void Displayarray(int marks[],int size){
    for(int i=0;i<size;i++){
        printf("%d",marks[i]);
    }
}
int main()
{   int size;
    int marks[]={1,2,3,4,5,7,6};
    indDelete(marks,2,7);
    size=7;
    size-=1;
    Displayarray(marks,size);



}
