//Armstrong number within a range
#include <stdio.h>
#include <math.h>
int main(){
	int length, i, lower_limit, upper_limit,temp;
	int cube_number,sum_of_cubes;
	printf("Enter the lower limit and upper limit followed by space respectively : ");
	scanf("%d%d", &lower_limit,&upper_limit);
	   for (i = lower_limit; i <= upper_limit; i++){
		temp = i;
		
		length = 0;
		while(temp!=0){
			temp = temp / 10;
			length++;
			}
			
		temp = i;
		
		sum_of_cubes = 0;
		while(temp!=0){
			sum_of_cubes += pow(temp % 10, length);
			temp = temp / 10;
			}	
				
			if (sum_of_cubes == i){
					printf("%d, ",i);}				
		}	
		return 0;			
}
		
	
