#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            printf("Enter the element for arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }


    // printing array
    int sum = 0;
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            printf("%d",arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
printf("The total sum: %d",sum);

}
