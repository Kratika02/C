#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};

void Transversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node* insertAtFirst(struct node *head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;


}

struct node* insertAtEnd(struct node *head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p;
    p=head;
    while(p!=NULL){
        p=p->next;
    }
ptr->next=p->next;
return head;
}

int main()
{
    struct node* head;
    struct node*second;
    struct node * third;
    struct node* fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    Transversal(head);
    //head=insertAtFirst(head,45);
    head=insertAtEnd(head,67);
    printf("\AFTER INSERTION\n");
    Transversal(head);

}
