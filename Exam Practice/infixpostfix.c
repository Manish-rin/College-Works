#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 20
char stack[SIZE];
int top = -1;
char text[20];

void push(char operator){
    if(top == SIZE -1){
        printf("Stack Overflow\n");
        return;
    }
    else{
        stack[++top] = operator;
        printf("%s is pushed in the stack\n",operator);
    }
}

char pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }
    else{
        printf("%s is popped from the stack\n",stack[top]);
        return stack[top--];
    }
}

int precedence(char operator){
    if(operator == '^'){
        return 3;
    }
    else if(operator == '*' || operator == '%' || operator == '/'){
        return 2;
    }
    else if(operator == '+' || operator == '-'){
        return 1;
    }
    else{
        printf("%s is needed to be checked\n", operator);
    }
}



int main(){
char infixexp[] = "a+b*(c-d)";
for (int i = 0; infixexp[i] != "\0"; i++){
    int j = 0;
    if(isalnum(infixexp[i])){
        text[j] = infixexp[i];
        j++;
    }
    else if (infixexp[i] == "\0" || infixexp[i] == "\n"){
        printf("Invalid character Traversed\n");
    }
    else{
        if(infixexp[i] == '(' || infixexp[i] == '{' || infixexp[i] == ']'){
            printf("%s is pushed in the stack\n",infixexp[i]);
            push(infixexp[i]);
        }
        else if (precedence(infixexp[i]) > precedence(stack[top])){
            printf("%s is pushed in the stack\n",infixexp[i]);
        }
        else{
            //Now since the precedence of infixexp is lower or equal to the one in stack we will pop until the top is of higher precedence. Then finally we will push it in the stack
            if(infixexp[i] == ')' || infixexp[i] == '}' || infixexp[i] == ']'){ 
                char get_operator;
                while((infixexp[i] == '(' && stack[top] != ')') || (infixexp[i] == '{' && stack[top] != '}') || (infixexp[i] == '[' && stack[top] != ']')){
                    get_operator = pop();
                }
            }
            while(precedence(infixexp[i] <= precedence(stack[top]))){
                pop();
            }
            push(infixexp[i]);
        }
    }
}


}