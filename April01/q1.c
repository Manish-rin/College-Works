#include <stdio.h>
void fac(int);
void fac(int n){
	int prod = 1;
	for(int i = 1; i<=n;i++){
		prod = prod * i;
}
	printf("The factorial of %d is: %d\n",n,prod);
}
int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	fac(n);
	return 0;
	}
	
