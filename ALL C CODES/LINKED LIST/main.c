#include <stdio.h>
#include <stdlib.h>

struct Node
{
 int data;
 struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}

int count(struct Node *p){
int count=0;
while(p){
    count++;
    p=p->next;
}
return count;
}

int main(){
int r;
int A[]={23,45,21,34,65,78};
create(A,6);
r=count(first);
printf("the no. of elements are %d",r);


}
