/*Q1.
Write a menu driven program to
a. insert an element into a defined position in an array
b. to remove an element from a defined position in an array.
c. display the array.*/

#include <stdio.h>
//To determine the size of array
int n(int *x){
    int *ptr = x;
    int count = 0;
    for(int i = 0; i<=20;i++){
        if(ptr[i]==0){
            break;
        }
        count = count + 1;
        ptr++;
    }
    return count; //This is the size of array

}

int insert_ele(int position, int element,int *count, int x
){
    for(int i = 1; i>position; i++){
        //shifting position of elements
        x[count+2-i] = x[count+i]
    }



}

int main(){
    int n,position = 2,element = 87;
    int x[20] = {5,8,9,2};
    // n = sizeof(x)/sizeof(x[0]);
    insert_ele(position,element,*x,x[20]);

}



