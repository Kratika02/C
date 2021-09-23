#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3,m4,m5;
    float per,sum;
    printf("enter the marks of 5 subjects:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    printf("%f\n",sum);
    per=sum/5;
    printf("%f\n",per);
    if(per>=60){
        printf("First division\n");}
    else if(per>=50){
        printf("Second Division\n");}
    else if((per>=30)&&(per<50)){
        printf("Third division\n");}
    else if(per<30){
            printf("fail");}

}
