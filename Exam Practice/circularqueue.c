#include <stdio.h>
#define SIZE 10
int cqueue[SIZE];
int rear = -1;
int front = -1;

void enqueue(int value){
    if (((rear + 1 ) % SIZE) == front){
        printf("Queue Overflow...No more space");
    }
    else if(rear == -1 && front == -1){
        front = 0;
        cqueue[++rear] = value;
    }
    else{
        rear = (rear + 1) % SIZE;
        cqueue[rear] = value;
    }
}

void dequeue(){
    if(front == -1){
        printf("Queue Underflow...The queue was never used\n");
    }
    else if (front == rear){
        rear = front = -1;
    }
    else{
        cqueue[front];
        front = (front + 1) % SIZE;
    }
}

void displaycqueue(int *cqueue){
    int i = front;
    while(1){
        printf("%d ",cqueue[i]);
        if(i == rear){
            break;
        }
        i = ((i+1) % SIZE);
    }
}

int main(){
    enqueue(20);
    enqueue(50);
    enqueue(30);
    enqueue(90);
    dequeue();
    displaycqueue(cqueue);
}

