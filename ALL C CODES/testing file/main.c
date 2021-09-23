#include<stdio.h>
#include<conio.h>

void main(){

    char a;
    char c;
    int  b;
    printf("Enter any letter");
    scanf("%c",&a);
    b=(int)a;
    if(b>=65&&b<=90)
        {
    c=a+32;
    printf("%c",c);
    }
    else{
        c=a-32;
        printf("%c",c);
    }


}
