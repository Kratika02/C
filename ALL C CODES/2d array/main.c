#include <stdio.h>
#include <conio.h>
void main()
{
   int a[2][3];
   int i=0,j=0;

   for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("enter values of display[%d][%d]",i,j);
           scanf("%d"&a[i][j]);
        }

   }
   printf("Two dimensional array elements:\n");
   for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++){
        if(j==2){
            printf("\n");
        }}

   }

}
