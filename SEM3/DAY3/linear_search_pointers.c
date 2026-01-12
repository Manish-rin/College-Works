#include <stdio.h>
int linearsearch(int *arr,int *element,int n){
    for(int i = 0; i<n; i++){
        if(arr[i] == *element){
            printf("The element is found at index %d",i);
            return 0;
        }
    }
    printf("The element is not found");
}
int main(){
    int arr[] = {1,5,3,8,3,9};
    int element = 9;
    linearsearch(arr,&element,6);
}

