#include<stdio.h>
#include<conio.h>
int main(){

    int n,a,b,sum=0;
    printf("enter the number you want to find the octal of");
    scanf("%d",&n);
    while(n>0){
        a=n%8;
        sum=sum*10+a;
        a=a/8;
    }
    while(sum>0){
        b=sum%10;
        printf("%d",b);
    }
}

