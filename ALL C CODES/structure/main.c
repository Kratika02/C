#include<stdio.h>
#include<conio.h>
int x=0;
int m1(){
x=5;
return x;
}
int m2(){
x=1;
return x;}


void main(){
int s=m1()+m2();
printf("%d",x);
}
