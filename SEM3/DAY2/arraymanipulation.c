#include <stdio.h>
int removal(int *arr, int *position, int *n){
    printf("The size is %d\n",*n);
    for(int i = *position; i < *n; i++){
        arr[i] = arr[i + 1];
    }
    *n--;
}

int add(int *arr, int *element,int *add_position,int *n){
    //arr = {2,6,9,3,1}
    for(int i = *n-1; i >= *add_position; i--){
        arr[i+1] = arr[i];
    }

    arr[*add_position] = *element;
    *n++;
    printf("%d",*n);
}

void display(int *arr,int *n){
    for(int j = 0; j < *n; j++){
        printf("%d ",arr[j]);
    }
}

int main(){
    int arr[10] = {2,6,9,3,1};
    int option,n = 0;
    for(int k = 0; arr[k] != 0; k++){
        n++;
    }
    int flag = 1;
    while (flag==1){
    printf("\n1.Remove\n2.Add\n3.Display\n4.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d",&option);
    if(option == 1){
        int position; //targeting 9
        printf("Enter the position to delete: ");
        scanf("%d",&position);
        printf("Deleting element\n");
        removal(arr,&position,&n);
    }

    else if(option == 2){
        int element,add_position;
        printf("Add element\n");
        printf("Enter the elemt to add: ");
        scanf("%d",&element);
        printf("Enter the position to add: (0-based): ");
        scanf("%d",&add_position);
        add(arr,&element,&add_position,&n);
    }

    else if(option == 3){
        display(arr,&n);
        printf("\n");
    }
    else{
        flag = 0;
    }
}
}
