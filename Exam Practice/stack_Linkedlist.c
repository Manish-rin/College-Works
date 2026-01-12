#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void displaystack(struct node *top){
    struct node *ptr = top;
    while(ptr != NULL){
        printf("%d ->",ptr->data);
        ptr = ptr->next;
    }
    printf(" -1");
}

struct node *push(struct node *top, int value){
    struct node *newnode = (struct node *) malloc(sizeof(struct node));
    if (newnode == NULL){
        printf("Stack Overflow");
    }
    else{
        newnode->data = value;
        newnode->next = top;
        top = newnode;
    }
    return top;
}

struct node *pop(struct node *top){
    if (top == NULL){
        printf("Stack Underflow");
    }
    else{
        struct node *temp = top;
        top = temp->next;
        free(temp);
    }
    return top;
}

struct node *peek(struct node *top){
    if (top == NULL){
        printf("Stack Underflow");
    }
    else{
        printf("\nThe topmost node is %d", top->data);
    }
}

int main(){
    struct node *top = NULL;
    top = push(top,12);
    top = push(top,16);
    top = push(top,62);
    top = push(top,45);
    top = pop(top);
    displaystack(top);
    top = peek(top);
}