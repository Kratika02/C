#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
   char str[20];
   int l;
   printf("enter any string");
   scanf("%s",str);
   l=strlen(str);
   while(l>=0){
    printf("%c",str[l]);
    l--;
   }
   printf("\n");
   getch();

}
