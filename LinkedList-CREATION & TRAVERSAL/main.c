#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void Traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr=ptr->next;
    }

}


int main()
{    int data1;
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    //ALLOCATING MEMORY IN HEAP

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    //ASSIGNING VALUES IN LINKED LIST

    head->data=5;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=15;
    third->next=fourth;

    fourth->data=20;
    fourth->next=NULL;

    //CALLING TRAVERSAL FUNCTION

    Traversal(head);
}
