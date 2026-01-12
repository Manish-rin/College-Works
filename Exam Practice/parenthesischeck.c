#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 15
char stack[SIZE];
int top = -1;

void push(char value){
    if(top >= SIZE - 1){
        printf("Stack overflow");
    }
    else{
        stack[++top] = value;
    }
}

void pop(char value){
    if(top == -1){
        printf("Expression is Unbalanced");
    }
    else{
        if((stack[top] == '(' && value == ')') || (stack[top] == '{' && value == '}') || (stack[top] == '[' && value == ']')){
            top--;
        }
        else{
            printf("Expression is Unbalanced\n");
            return;
        }
    }
}

void displayStack(char *stack){
    for(int i = 0; i <= top; i++){
        printf("%c",stack[i]);
        printf("\n");
    }
}


int main(){
    char exp[] = "[{{(3*2)+(5+3)}]";
    int length = strlen(exp);
    for(int i = 0; i< length; i++){
        if(isalnum(exp[i])){
            printf("%c is traced now\n",exp[i]);
        }
        else{
            printf("%c is traced now\n", exp[i]);
            if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
                push(exp[i]);
            }
            else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
                pop(exp[i]);
            }
            else{
                // printf("Undefined character\n");
            }
        }
    }

    if(top == -1){
        printf("Fully balanced\n");
        displayStack(stack);
    }
        
    else {
        printf("Not balanced...top is %d\n",top);
        displayStack(stack);
    }
}