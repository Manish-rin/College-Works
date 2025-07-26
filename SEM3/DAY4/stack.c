#include <stdio.h>
#define max 5
int stack[max];
int top = -1;

int isFull(){
    return top == max - 1;
}

void display(int *stack,int top){
    printf("%d",top);
    for(int i = top; i>top; i--){
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
        printf("It is now at index: %d",top);
    }
    display(stack,top);
}



int main(){
    int option;
    printf("1.PUSH  2.POP  3.PEAK  4.DISPLAY\n");
    printf("Enter your choice: ");
    scanf("%d",&option);
    if(option == 1){
        int element;
        printf("Enter the element you want to push: ");
        scanf("%d",&element);
        push(element);
    }
}
