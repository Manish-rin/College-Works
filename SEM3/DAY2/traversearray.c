#include <stdio.h>
int main(){
    int arr[] = {3,7,9,2,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n;i++){
        //traversing each elements
        printf("%d ",arr[i]);
    }
}
