#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct myarray{
	int usedsize;
	int totalsize;
	int *ptr;
		};

void createarray(struct myarray *a,int usize,int tsize){
	a->usedsize=usize;
	a->totalsize=tsize;
	a->ptr=(int*)malloc(tsize*sizeof(int));
		}

void setarray(struct myarray *a){
	int i=0;
	for(i=0;i<a->usedsize;i++){
		printf("Enter element %d\n",i+1);
		scanf("%d",&(a->ptr)[i]);
			}
				}

void getarray(struct myarray *a){
	int i=0;
	for(i=0;i<a->usedsize;i++){
		printf("Element %d is %d\n",i+1,(a->ptr)[i]);
			}
				}
int main(){
	struct myarray marks;
	int tot,used;
	printf("enter total size\n");
	scanf("%d",&tot);
	printf("enter used size\n");
	scanf("%d",&used);
	createarray(&marks,used,tot);

	printf("using setarray function\n");
	setarray(&marks);
	printf("using getarray function\n");
	getarray(&marks);
				}


