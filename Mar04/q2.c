//Armstrong number

#include <stdio.h>
#include <math.h>
int main(){
	int num, length, last_digit, i, drop_last_digit;
	double cube_number, sum_of_cubes = 0;
	printf("Enter the number and it's length: ");
	scanf("%d %d", &num, &length);
	i = 1;
	double original_num = num;
	while(i<=length){
		last_digit = num % 10;
		cube_number = pow(last_digit, length);
		sum_of_cubes = sum_of_cubes + cube_number;
		num = num / 10;
		i++;
		}
		printf("The sum of cubes is: %lf\n",sum_of_cubes);
		
			
		
		if (sum_of_cubes == original_num){
				printf("It is a armstrong number");}
				
		else{
			printf("It is not a armstrong number");}
			
}
		
	
