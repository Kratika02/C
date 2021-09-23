#include <stdio.h>
#include <stdlib.h>

struct dynaa{
int A[10];
int size;

};

void display(struct dynaa arey){
int i;
for(i=0;i<arey.size;i++){
    printf("%d ",arey.A[i]);
}
    }
int search(struct dynaa arey,int num){
int i;
for(i=0;i<arey.size;i++){
    if(arey.A[i]==num)
        return i;
}
return -1;
}
void input(struct dynaa arey){
int i;
for(i=0;i<arey.size;i++){
    scanf("%d",&arey.A[i]);
}
display(arey);
}



int main()
{
    int num,posn;
  struct dynaa arey;
  printf("enter the size of the array");
  scanf("%d",&arey.size);
  input(arey);
  display(arey);
  printf("enter the number you want to search");
  scanf("%d",&num);
  posn=search(arey,num);
  printf("%d",posn);
}
