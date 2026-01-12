#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createnode(){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    return newnode;
}

struct node *insertfirst(struct node *head, int value){
    struct node *ptr = head,*newnode;
    newnode = createnode();
    do{
        ptr= ptr->next;
    }while(ptr->next != head);
    newnode->data = value;
    newnode->next = head;
    ptr->next = newnode;
    head = newnode;
    return head;
}

struct node *insertend(struct node *head, int value){
    struct node *ptr = head,*newnode;
    newnode = createnode();
    do{
        ptr = ptr->next;
        // printf("%d\n",ptr->data);
    }while(ptr->next != head);
    newnode->data = value;
    newnode->next = head;
    ptr->next = newnode;
}

struct node *insertanywhere(struct node*head, int value, int afterthis){
    struct node*ptr = head, *newnode;
    newnode = createnode();
    do{
        ptr = ptr->next;
    }while(ptr->data != afterthis && ptr != head);
    newnode->data = value;
    newnode->next = ptr->next;
    ptr->next = newnode;
}

struct node *deletefirst(struct node *head){
    struct node *ptr = head, *temp; //ptr is the old head which is needed to be deleted
    temp = ptr; //temp is holding the next node to old head which will be the new head
    do{
        ptr = ptr->next; 
    }while(ptr->next != head);
    head = temp->next;
    ptr->next = head;
    free(temp);
    return head;
}

struct node *deletelast(struct node* head){
    struct node *ptr = head, *temp;
    if(ptr == NULL){
        printf("There is nothing to delete\n");
    }

    do{
        // printf("%d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr->next->next != head);
    // printf("Currently the ptr is at- %d\n",ptr->data);
    
    temp = ptr->next; //node to be deleted
    ptr->next = head;
    free(temp);
    
}

struct node *deleteanywhere(struct node* head, int deletethis){
    struct node *ptr = head, *temp;
    if(ptr == NULL){
        printf("There is nothing to be deleted\n");
    }
    
    do{
        // printf("%d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr->next->data != deletethis);
    // printf("Currently the ptr is at- %d\n",ptr->data);
    temp = ptr->next; //node to be deleted
    ptr->next = temp->next;
    free(temp); 
}



void display(struct node *head){
    struct node *ptr = head;
    do{
        printf("%d ->",ptr->data);
        ptr = ptr->next;
    }while(ptr!= head);

}

int main(){
    struct node* head = (struct node*) malloc(sizeof(struct node));
    head->data = 2;
    head->next = head;
    head = insertfirst(head, 0);
    insertend(head,4);
    insertanywhere(head,3,2);
    // head = deletefirst(head);
    // deletelast(head);
    // deleteanywhere(head,3);
    display(head);
}