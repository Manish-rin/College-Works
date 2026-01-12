#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createnode(){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    return newnode;
}

struct node *insertatthebeginning(struct node *head){
    struct node *newnode = createnode();
    newnode->data = 4;
    newnode->next = head;
    head = newnode;
    return head;
}

struct node *insertattheend(struct node *head){
    struct node *newnode = createnode();
    struct node *ptr = head;
    newnode->data = 6;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next= newnode;
    newnode->next = NULL;;
    return head;
}

void display(struct node *head){
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}


int main(){
struct node *head = (struct node*) malloc(sizeof(struct node));
head->data = 2;
head->next = NULL;
head = insertatthebeginning(head);
head = insertattheend(head);
display(head);
}
