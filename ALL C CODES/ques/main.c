#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,a=0,b=0,c=0,d=0,e=0,f=0,sum=0;
printf("enter the sum of number");
scanf("%d",&n);
if(n>=100){
    a=n/100;
    n=n%100;
}
else if(n>=50){
    b=n/50;
    n=n%50;
}
else if(n>=10){
    c=n/10;
    n=n%10;
}
else if(n>=5){
    d=n/5;
    n=n%5;
}
else if(n>=2){
    e=n/2;
    n=n%2;
}
else if(n>=1){
    f=n/1;
    n=n%1;
}

sum=a+b+c+d+e;
printf("%d",sum);
}



