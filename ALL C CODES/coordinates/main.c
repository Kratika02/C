#include <stdio.h>
#include <stdlib.h>

int main()
{int x,y;
    printf("enter the x and y coordinates respectively");
    scanf("%d %d ",&x,&y);
    if(y==0)
        printf("the point is on x-axis");

    else if(x==0)
        printf("point is on the y-axis");



}
