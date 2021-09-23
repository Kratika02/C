#include <stdio.h>
#include <stdlib.h>


int indinsertion(int marks[],int capacity,int used,int index,int element){

    if(used>=capacity){
        printf("INSERTION IS NOT POSSIBLE");
        return -1;
    }
    for(int i=used-1;i>=index;i--){
        marks[i+1]=marks[i];
    }
    marks[index]=element;


}

void displayarray(int marks[],int used){

    int i;
    for(i=0;i<used;i++){
        printf("%d",marks[i]);
    }
}

int main()
{
    int marks[20]={1,2,3,5,6};
    indinsertion(marks,20,5,3,4);
    displayarray(marks,6);

}
