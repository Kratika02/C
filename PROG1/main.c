/*#include <stdio.h>
#include <stdlib.h>

int main()
{   int age;
    printf("ENTER YOUR AGE= ");
    scanf("%d",&age);
    if(age>=18)
        printf("YOU ARE ELIGIBLE FOR VOTING");
    else
        printf("YOU ARE NOT ELIGIBLE FOR VOTING");
}*/


/*#include<stdio.h>
#include<conio.h>

int main(){

int a,b,add,sub;
printf("Enter number 1\n");
scanf("%d",&a);
printf("Enter number 2\n");
scanf("%d",&b);

if(a!=b){
    add=a+b;
    printf("ADDITION DONE=%d",add);
}
else{
    sub=a-b;
    printf("SUBTRACTION DONE=%d",sub);
}

}*/

#include<stdio.h>
#include<conio.h>


int main(){

int year,leap;
printf("Enter the year:");
scanf("%d",&year);
leap=year%4;
if(leap==0)
    printf("%d is a leap year",year);
else
    printf("%d is not a leap year",year);

}

