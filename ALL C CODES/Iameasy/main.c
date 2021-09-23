#include<stdio.h>
#include<math.h>

void main(){
    int n,a,b,x,i,j;
    int sum1=0,sum2=0,diff=0;
    printf("enter the number of test cases");
    scanf("%d",&t);
    for(i=0;i<t;i++){
            printf("enter the nth number");
    scanf("%d %d ",&n,&x);

           for(i=1;i<=n;i++){
            a=pow(i,x);
            sum1=sum1+a;
            printf("%d\n",sum1);

           }
           for(j=0;j<n;j++){
            b=pow(j,x);
            sum2=sum2+b;
            printf("%d\n",sum2);

           }
           diff=sum1-sum2;
           printf("%d",diff);
    }



}

