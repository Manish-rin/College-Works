#include <stdio.h>
int fac(int);
int fac(int n){
	if(n==1 || n==0){
		return 1;   
	}
	else
		return n * fac(n-1);
	
}
int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("The factorial of %d is: %d\n",n,fac(n));
	return 0;
	}
