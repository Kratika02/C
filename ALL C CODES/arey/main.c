#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int num[5]={1,200,3000,4,50};
int cop[5];
int i,j;
for(i=5;i>=0;i--){
        for(j=0;j<5;j++){
    cop[i]=num[j];
}}
for(i=0;i<5;i++){
    for(j=0;j<5;j++)
        num[j]=cop[i];
}
int m;
for(m=0;m<5;m++){
printf("%d",num[m]);}





}
