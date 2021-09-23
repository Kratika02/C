#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int m1,m2,m3,percent;
    char name[100];
    printf("Enter the marks of English out of 100=\n");
    scanf("%d",&m1);
    printf("Enter the marks of Hindi out of 100=\n");
    scanf("%d",&m2);
    printf("Enter the marks of Maths out of 100=\n");
    scanf("%d",&m3);
    printf("Enter student full name=\n");
    scanf("%s",name);
    percent=(m1+m2+m3)*100/300;
    printf("\n The percent of %s is %d",name,percent);
}
