#include <stdio.h>
int main(){
    int x[] = {7,98,25,99,102,57};
    int n = sizeof(x) / sizeof(x[0]);
    int temp,flag;

    printf("The unsorted array : ");
    for(int i = 0; i<n;i++){
        printf("%3d ",x[i]);
    }
    printf("\n");
    for(int i = 0; i<n-1;i++){
        flag = 0;
        for(int j=0; j<n-1-i; j++){
            if (x[j]>x[j+1]){
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }

    //now showing the sorted array
    printf("The sorted array is: ");
    for(int i = 0; i<n;i++){
        printf("%3d ",x[i]);
    }









}

