//Program to find largest element row wise and column wise

#include <stdio.h>
int main(){
	int row, col, row_max, col_max;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of columns for matrix: ");
	scanf("%d",&col);
	int x[row][col];
	
	//building matrix now
	for(int i=0; i<row;i++){
		for(int j=0; j<col; j++){
			printf("Enter the value of x[%d][%d]: ",i+1,j+1);
			scanf("%d",&x[i][j]);
			}
			printf("\n");
		}
			
	//printing matrix now
	printf("THe matrix x:\n");
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%4d",x[i][j]);
		}
		printf("\n");
		}
		
	//Now to find largest element row wise
	for(int i=0; i<row; i++){
	row_max = x[0][0];
		for(int j=0; j<col; j++){
			if (x[i][j] > row_max){
				row_max = x[i][j];
				}
			}
		printf("The largest element in the row is %d\n", row_max);
		}	
		
	//Now to find largest element column wise
	for(int j=0;j<col; j++){
	col_max = x[0][0];
		for(int i=0; i<row; i++){
			if (x[j][i] > col_max){
				col_max = x[j][i];
				}
			}
		printf("The largest element in the col is %d\n", col_max);
		}	
		
}
