//Write a program in C to evaluate 1^2+2^2.....+n^2, n given by the user
#include <stdio.h>
int main(){
	int n,sum,i,square_of_numbers;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	sum = 0;
	for (i = 1; i <= n; i++){
		square_of_numbers = i * i;
		sum = square_of_numbers + sum;
		printf("Hi\n");
	}
	printf("The sum of the sequence is %d",sum);
}		
