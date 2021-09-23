#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{    int x;
     printf("enter the value of x");
     scanf("%d",&x);
     if(x<0){
    Beep(3000,5000);
    printf("negative numbers not allowed");
    }
    else
        printf("number is positive");
    return 0;
}
