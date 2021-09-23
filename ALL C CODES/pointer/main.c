#include <stdio.h>
#include <stdlib.h>

void main(){

int a=4,*ptr1;
char b='z',*ptr2;
float c=9.800000,*ptr3;
ptr1=&a;
ptr2=&b;
ptr3=&c;
printf("the value of ptr1 is %d and address is %u\n",*ptr1,ptr1);
printf("the value of ptr2 is %d and address is %u\n",*ptr2,ptr2);
printf("the value of ptr3 is %d and address is %u\n",*ptr3,ptr3);
ptr1++;
ptr2++;
ptr3++;
printf("the value of ptr1 is %d and address is %u\n",*ptr1,ptr1);
printf("the value of ptr2 is %d and address is %u\n",*ptr2,ptr2);
printf("the value of ptr3 is %d and address is %u\n",*ptr3,ptr3);

}
