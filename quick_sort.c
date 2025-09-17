//Quick Sort

#include <stdio.h>
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j=low; j<high;j++){
        if(arr[j]<= pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    //swap pivot to its correct position
    int temp = arr[i+1];
    arr[i+1]=arr[high];
    arr[high]= temp;
    return (i+1);
}

//Function to implement quick sort
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr, pi+1, high);
    }
}

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements separated by space: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    printArray(arr, n);

    quicksort(arr, 0, n - 1);


    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}
