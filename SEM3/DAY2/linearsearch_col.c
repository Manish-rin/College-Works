#include <stdio.h>
int main(){
    int m,n,element;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            printf("Enter the element for arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

printf("\n");
printf("ENTER THE ELEMENT TO SEARCH IN ARRAY: ");
scanf("%d",&element);

printf("\n");
    //finding element linear search-column wise
    for(int i =  0;i<n;i++){
        for(int j = 0; j<m;j++){
            if (element == arr[j][i]){
                printf("Element is found at index (%d,%d)",j,i);
            }
        }
        printf("\n");
    }

}
