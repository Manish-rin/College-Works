#include <stdio.h>
void matrixsum(int m, int n, int *arr1,int *arr2){
    int add;
    printf("Matrix after summation is:\n");
    for(int i =0; i<m;i++){
        for(int j =0; j<n;j++){
            add = *(arr1+i*n+j) + *(arr2+i*n+j);
            printf("%4d",add);
        }
        printf("\n");
    }
}

void matrixdiff(int m, int n, int *arr1,int *arr2){
    int diff,a,b;
    printf("Matrix after differnce is:\n");
    for(int i =0; i<m;i++){
        for(int j =0; j<n;j++){
            diff = *(arr1+i*n+j) - *(arr2+i*n+j);
            printf("%4d",diff);
        }
        printf("\n");
    }
}

void matrixmul(int m, int n, int *arr1, int *arr2){
    printf("Matrix after multiplication is: \n");
    for(int i =0;i<m;i++){
        for(int j =0; j<n; j++){
            int mul, mul_sum = 0;
            for(int k=0;k<n;k++){
                mul = *(arr1 +i*n+k) * *(arr2 + k*n + j);
                mul_sum = mul + mul_sum;
            }
            printf("%4d",mul_sum);
        }
        printf("\n");
    }
}

int main(){
    int m,n,choice;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int arr1[m][n];
    int arr2[m][n];

    for(int i= 0; i<m;i++){
        for(int j =0;j<n;j++){
        printf("\nEnter the element for arr1[%d][%d]: ",i,j);
        scanf("%d",&arr1[i][j]);
        }
    }
    for(int i= 0; i<m;i++){
        for(int j =0;j<n;j++){
        printf("\nEnter the element for arr2[%d][%d]: ",i,j);
        scanf("%d",&arr2[i][j]);
        }
    }

    printf("1.Add\n2.Diff\n3.Multiply\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice == 1){
    matrixsum(m,n,(int *)arr1,(int *)arr2);
    }

    else if(choice == 2){
        matrixdiff(m,n,(int *)arr1,(int *)arr2);
    }

    else if(choice == 3){
        matrixmul(m,n,(int *)arr1,(int *)arr2);
    }

    else{
        printf("Invalid entry");
    }
}
