#include <stdio.h>
#include <conio.h>

void main()
{
    int a[2][3];
    int i,j;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("enter values of display[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    printf("two dimensional array elements:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
           printf("%d\t",a[i][j]);
           if(j==2)
            printf("\n");


        }
    }

}
