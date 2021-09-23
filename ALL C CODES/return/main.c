#include <stdio.h>
#include <conio.h>
void calc(int m1,int m2,int m3,float*,float*);

int main()
{
int m1,m2,m3;
float sum=0.0,avg=0.0;
printf("enter marks of 3 subjects");
scanf("%d %d %d ",&m1,&m2,&m3);
calc(m1,m2,m3,&sum,&avg);
printf("%f %f ",sum,avg);
}
void calc(int m1,int m2,int m3,float *sum,float *avg){
*sum=m1+m2+m3;
*avg=*sum/3;

}
