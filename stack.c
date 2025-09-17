#include <stdio.h>
#define MAX 5   // size of stack

int stack[MAX];
int top = -1;

// Push function
void push(int data) {
    if(top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", data);
        return;
    }
    stack[++top] = data;
    printf("%d pushed to stack\n", data);
}

// Pop function
void pop() {
    if(top == -1) {
        printf("Stack Underflow! Nothing to pop\n");
        return;
    }
    printf("%d popped from stack\n", stack[top--]);
}

// Peek function
void peek() {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element is %d\n", stack[top]);
}

// Display stack
void display() {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    display();
    return 0;
}
