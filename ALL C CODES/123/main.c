# include <stdio.h>
int main(){
int a,b,c;
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);
int *sum;
float *avg;
calc(a,b,c,&sum,&avg);
printf("%d\n %f",sum,avg);
}

void calc(int x,int y,int z,int*sum,float*avg){

*avg=(*sum)/2;
}
