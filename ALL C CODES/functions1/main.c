#include <stdio.h>
#include <stdlib.h>

int swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}

int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("%d %d",a,b);


}
