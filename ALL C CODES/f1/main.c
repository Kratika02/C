#include <stdio.h>
#include <stdlib.h>

 int fact(int a){
 int i,m=1;
 if(a>0){
    for(i=1;i<=a;i++){
        m=m*i;}
    printf("%d",m);
 }}
int main()
{
    int n,a;
    printf("enter the number whose factorial you want to find");
    scanf("%d",&n);
    a=fact(n);
}
