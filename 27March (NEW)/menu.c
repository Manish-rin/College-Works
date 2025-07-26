/*Q1.
Write a menu driven program to
a. insert an element into a defined position in an array
b. to remove an element from a defined position in an array.
c. display the array.*/

#include <stdio.h>
//To determine the size of array
int n(int *x){
    int count = 0;
    for(int i = 0; i<20;i++){
        if(x[i]!=0){
            count = count + 1;
        }
    }
    return count; //This is the size of array
}

int insert_ele(int position, int element,int count, int *x
){
    for(int i = 1; i + 1 <position; i++){
        //shifting position of elements
        x[count-i] = x[count - i +1];
    }

    x[position] = element;
    printf("The new element at index %d: %d ",position,x[position]);
}

int main(){
    int position = 2,element = 87;
    int x[20] = {78,8,9,2};
    // n = sizeof(x)/sizeof(x[0]);
    insert_ele(position,element,n(x),x);
}



