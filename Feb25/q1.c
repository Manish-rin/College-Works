//Write a program in C to evaluate y = x^n where n is integer, x can be integer/floating (USING WHILE LOOP)
#include <stdio.h>
int main(){
	int n,i;
	float y,x;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the value of x: ");
	scanf("%f",&x);

	i = 1;
	y = 1;
	while(i <= n){
		y = y * x;
		i = i + 1;
		printf("Hi\n");
	};
	printf("The value of y is %f",y);
}	
