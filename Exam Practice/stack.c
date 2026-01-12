#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE - 1];
int top = -1;

//push in the array
void push(int data){
    if (top >= SIZE - 1){
        printf("Stck overflow\n");
    }
    else{
        stack[++top] = data;
        printf("%d is pushed at the position %d\n", data,top);
    }
}

//pop in the array
void pop(){
    if (top == -1){
        printf("Stack underflow\n");
    }
    else{
        printf("%d is popped from the position %d\n", stack[top],top);
        top--;

    }
}

void peek(int top){
    if (top = -1){
        printf("Stack underflow");
    }
    else{
        printf("The element on the top most is %d", stack[top]);
    }
}

void displayStack(int *stack){
    for(int i = 0; i <= top; i++){
        printf("%d",stack[i]);
        printf("\n");
    }
}

int main(){
    while(1){
        int choice;
        printf("Push --> 1\nPop --> 2\nPeek --> 3\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        if (choice == 0){
            displayStack(stack);
        }

        else if (choice == 1){
            int data;
            printf("\nEnter the value to push: ");
            scanf("%d", &data);
            push(data);
        }

        else if (choice == 2){
            pop();
        }

        else if (choice == 3){
            peek(top);
        }

        else{
            exit(0);
        }
    }
}


