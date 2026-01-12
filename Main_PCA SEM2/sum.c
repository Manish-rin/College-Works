#include <stdio.h>
int main(){
    int m,n,elementfrom1stmatrix,elementfrom2ndmatrix,sum;
    printf("Enter the number of rows and columns of Matrix 1: ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int arr2[m][n];

    //Entering value for first matrix
    for(int i= 0;i < m; i++){
        for(int j = 0; j<n; j++){
            printf("Enter the value at arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //Entering value for second matrix
    for(int i= 0;i < m; i++){
        for(int j = 0; j<n; j++){
            printf("Enter the value at arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    //printing both matrix
    printf("The first matrix is: \n");
    for(int i = 0;i<m;i++){
        printf("\n");
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\nThe second matrix is: \n");
    for(int i = 0;i<m;i++){
        printf("\n");
        for(int j=0; j<n; j++){
            printf("%d ",arr2[i][j]);
        }
    }

    //Now adding adjacent positions
    printf("\nThe matrix after summation is:\n");
    for(int i = 0; i<m;i++){
        printf("\n");
        for(int j = 0; j<n; j++){
            elementfrom1stmatrix = arr[i][j];
            elementfrom2ndmatrix = arr2[i][j];
            sum = elementfrom1stmatrix + elementfrom2ndmatrix;
            printf("%d ",sum);
        }
    }
return 0;
}
