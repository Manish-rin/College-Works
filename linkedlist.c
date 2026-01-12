#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};


struct node *createnode(){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    return newnode;
}

struct node *insertbeginning(struct node *head,int value){
    struct node *newnode;
    newnode = createnode();
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

//These functions are to insert a node
struct node *insertend(struct node *head, int value){
    struct node *ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    struct node* newnode = createnode();
    newnode->data=value;
    ptr->next = newnode;
    newnode->next = NULL;
}

struct node *insertanywhere(struct node *head,int afterthis, int value){
    struct node *ptr = head;
    while(ptr->data != afterthis){
        ptr = ptr->next;
    }

    struct node *newnode = createnode();
    newnode->data = value;
    newnode->next = ptr->next;
    ptr->next = newnode;
}

//---------------------------------------------
//These functions are to delete node
struct node *deletefirst(struct node *head){
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}

struct node *deletelast(struct node *head){
    struct node* ptr = head;
    while(ptr->next->next != NULL){
        ptr= ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}

struct node *deleteanywhere(struct node *head, int whichdelete){
    if(head == NULL){
        printf("LinkedList is empty\n");
        return NULL;
    }

    if(head->data == whichdelete){
        struct node *temp = head;
        
    }

    struct node* ptr = head;
    while(ptr->next->data != whichdelete){
        ptr = ptr->next;
    }

    struct node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}





void display(struct node *head){
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(){
    struct node *head = (struct node*) malloc(sizeof(struct node));
    head->data = 23;
    head->next = NULL;
    head = insertbeginning(head,78);
    insertend(head,81);
    insertanywhere(head,23,25);
    insertanywhere(head,25,29);
    insertanywhere(head,29,33);
    insertanywhere(head,33,38);
    insertanywhere(head,38,80);
    head = deletefirst(head);
    deletelast(head);
    deleteanywhere(head,33);



    display(head);
    return 0;
}