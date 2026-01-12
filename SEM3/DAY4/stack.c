#include <stdio.h>
#define max 10
int stack[max];
int top = -1;

int isFull(){
    if(top == max - 1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void display(int *stack,int top){
    for(int i = top; i>-1; i--){
        printf("%d\n",stack[i]);
    }
}

void push(int element){
    if(isFull()){
        printf("Stack Overflow\n");
    }
    else{
        top = top + 1;
        stack[top] = element;
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack Underflow\n");
    }
    else{
        int value = stack[top];
        top--;
        return value;
    }
}

int peek(){
    if(isEmpty()){
        printf("Stack Underflow\n");
    }
    else{
        return stack[top];
    }
}



int main(){
    int option;
    int flag = 1;
    while(flag == 1){
    printf("1.PUSH  2.POP  3.PEAK  4.DISPLAY\n");
    printf("Enter your choice: ");
    scanf("%d",&option);
        if(option == 1){
            int element;
            printf("Enter the element you want to push: ");
            scanf("%d",&element);
            push(element);
        }

        else if(option == 2){
            printf("The element popped from the stack is %d\n",pop());
        }

        else if(option == 3){
            printf("The element on top is %d\n",peek());
        }

        else if(option == 4){
            display(stack,top);
        }

        else{
            flag = 0;
        }
    }
}
