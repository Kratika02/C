#include<stdio.h>
#include<conio.h>
void calc(int m1,int m2,int m3,float *avg,float *per){
    int sum=m1+m2+m3;
    *avg=sum/3.0;
    *per=(sum*100)/300;
    }
void main(){
int m1,m2,m3;
float avg,per;
scanf("%d %d %d ",&m1,&m2,&m3);
calc(m1,m2,m3,&avg,&per);
printf("%f",avg);
printf("%f",per);
}
