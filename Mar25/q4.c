#include <stdio.h>
int main(){
	int x[]= {18,91,53};
	int y[]= {45,78,12};
	int n_x = sizeof (x) / sizeof(x[0]);
	int n_y = sizeof (y) / sizeof(x[0]);
	int temp, flag;
	int z[n_x+n_y];
	int i,j;
	for(i=0; i<n_x; i++){
		z[i] = x[i];
		}
	for(j=0; j<n_y; j++){
		z[i+j] = y[j];
		}
		
	//Now printing the merged array z
	printf("The merged array is: ");
	for(int k =0; k< (n_x+n_y); k++){
		printf("%d ",z[k]);
	}
	printf("\n");
	
	//Now let's sort the merged array
	for(in i=0; i<n-1; i++){
		flag =0;
		for(int j=0;j<n-1-1;j++{
			if (x[j] >x[j+1]){
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
				flag = 1;
			}
		}
		
		if (flag ==0){
			break
		}
		
	}
	
	printf("THe sorted array is: ");
	for (int i = 0; i<n; i++){
		printf("3d",x[i];
		}
	}	
		
		
		
}
	
