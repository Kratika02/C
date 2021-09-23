#include<stdio.h>
#include<conio.h>
void main(){
   float a,b,temp;
   printf("enter two numbers");
   scanf("%f %f",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("%f %f",a,b);
}
