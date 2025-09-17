#include <stdio.h>
int main(){
    int row,col,temp;
    printf("Enter the number of rows for matrix x: ");
    scanf("%d",&row);
    printf("Enter the number of columns for matrix x: ");
    scanf("%d",&col);
    int x[row][col];

    //building matrix now
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the value of x[%d][%d]: ",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }

    //printing matrix
    printf("The unsorted matrix x:\n");
    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            printf("%4d ",x[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<row;i++){
        for(int j=0; j<col-1;j++){
            for(int k=0; k<col-1-j;k++){
                if(x[i][k]>x[i][k+1]){
                    temp = x[i][k];
                    x[i][k] = x[i][k+1];
                    x[i][k+1] = temp;
                }
            }
        }
    }

    //printing the sorted matrix
    printf("The sorted matrix:\n");
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            printf("%4d ",x[i][j]);
        }
        printf("\n");
    }
}
