#include <stdio.h>
#include <stdlib.h>

void main()
{
     int a[3][3];
    int i,j;


    for(i=0;i<3;i++){
            printf(" ");
        for(j=0;j<3;j++){
           printf("*");
           if(j==2)
            printf("\n");
        }
    }

}
