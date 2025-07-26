#include <stdio.h>
int main(){
    int n_x, n_y;
    printf("Enter the number of elements for both the arrays respectively: ");
    scanf("%d %d",&n_x,&n_y);
    int x[n_x];
    int y[n_y];
    int z[n_x + n_y];

    printf("Enter the elements for 1st array: ");
    for(int i=0;i<n_x;i++){
        scanf("%d",&x[i]);
    }
    printf("Enter the elements for 2nd array: ");
    for(int i=0;i<n_y;i++){
        scanf("%d",&y[i]);
    }

    // Merge arrays
    for (int i = 0; i < n_x; i++) {
        z[i] = x[i];
    }
    for (int j = 0; j < n_y; j++) {
        z[n_x + j] = y[j];
    }

    printf("The merged array is: ");
    for (int k = 0; k < n_x + n_y; k++) {
        printf("%d ", z[k]);
    }
    printf("\n");

    // Bubble sort the merged array
    int temp, flag;
    int n = n_x + n_y;
    for (int i = 0; i < n-1; i++){
        flag = 0;
        for (int j = 0; j < n-i-1; j++){
            if (z[j] > z[j+1]){
                temp = z[j];
                z[j] = z[j+1];
                z[j+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        break;
    }

    printf("The sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", z[i]);
    }
    return 0;
}
