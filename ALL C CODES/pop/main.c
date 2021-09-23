#include<stdio.h>

void func(int a,int b,int c,float *avg,float *per);
void main(){
int a,b,c;
float avg,per;
printf("enter the marks");
scanf("%d %d %d ",&a,&b,&c);
func(a,b,c,&avg,&per);
printf("%f\n",avg);
printf("%f",per);

}
void func(int a,int b,int c,float *avg,float *per){

    *avg=(a+b+c)/3.0;
    *per=((a+b+c)/300)*100;}
