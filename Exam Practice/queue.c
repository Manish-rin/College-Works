#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1; //pointer to tracker the first element
int rear = -1; //pointer to track the last element

//enqueue 
void enqueue(int *queue, int value){ //queue is full
    if (rear == SIZE -1){ 
        printf("Queue Overflow");
    }

    else if(front == -1){ //queue was never used so we have to push the pointer to first element after adding as the front pointer always points to the element that is supposed to be deleted first...so we are doing this
        front = 0;
        queue[++rear] = value;
    }

    else{
        queue[++rear] = value;
    }
}

void dequeue(int *queue){
    if (rear == -1 || front > rear){ //front grows larger after few operations of enqueue and dequeue
        printf("Queue Underflow");
    }

    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("The dequeued value is %d\n",queue[front++]);
    }
}

void display(int *queue){
    int ptr = front;
    while((ptr <= rear)){
        printf("%d |",queue[ptr]);
        ptr++;
    }
    printf("\n");
}


int main(){
    enqueue(queue, 23);
    enqueue(queue, 73);
    enqueue(queue, 273);
    enqueue(queue, 34);
    dequeue(queue);
    enqueue(queue, 81);
    display(queue);
}