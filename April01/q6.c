#include <stdio.h>
void sum(int);
void sum(int n){
	int sum = 0;
	for(int i = 1; i<=n;i++){
		sum = sum + i;
}
	printf("The sum of series till %d is: %d\n",n,sum);
}
int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	sum(n);
	return 0;
	}
