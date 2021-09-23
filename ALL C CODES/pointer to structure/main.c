#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct rect{
    int length;
    int breadth;};

void main(){
    struct rect r={12,89};
struct rect *p=&r;
r.length=23;
p->length=89;
printf("%d %d",r.length,p->length);




}
