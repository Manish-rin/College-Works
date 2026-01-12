#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};

struct node *createnode(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    return newnode;
}

struct node *insertfirst(struct node *head, int value){
    struct node *ptr = head, *newnode;
    newnode = createnode();
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = ptr;
    head = newnode;
    return head;
}

struct node *insertend(struct node *head, int value){
    struct node *ptr = head, *newnode;
    newnode = createnode();
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    newnode->data = value;
    newnode->prev = ptr->next;
    newnode->next = NULL;
    ptr->next = newnode;
}

struct node *insertanywhere(struct node *head, int value, int afterthis){
    struct node *ptr = head, *newnode;
    newnode = createnode();
    while(ptr->data != afterthis && ptr->next != NULL){
        ptr = ptr->next;
    }
    newnode->data = value;
    newnode->prev = ptr;
    newnode->next = ptr->next;
    ptr->next = newnode;
}


struct node *deletefirst(struct node *head){
    struct node *ptr = head, *temp;
    head = ptr->next;
    head->prev = NULL;
    free(ptr);
    return head;
}

struct node *deleteend(struct node *head){
    struct node *ptr, *temp;
    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = NULL;
    free(temp);
}

struct node *deleteanywhere(struct node *head,int deletethis){
    struct node *ptr = head, *temp, *temp2;
    while(ptr->next->data != deletethis && ptr->next != NULL){
        ptr = ptr->next;
    }
    temp = ptr->next; //pointing 3
    temp2 = temp->next; //pointing 4
    temp2->prev = ptr;
    ptr->next = temp2;
    free(temp);

}

void display(struct node *head){
    struct node *ptr = head;
    printf("NULL <- ");
    while(ptr != NULL){
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}



int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 2;
    head->prev = NULL;
    head->next = NULL;
    head = insertfirst(head, 0);
    insertend(head,4);
    insertanywhere(head,3,2);
    // head = deletefirst(head);
    // deleteend(head);
    // deleteanywhere(head,3);
    display(head);
}