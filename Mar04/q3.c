#include <stdio.h>
int main(){
	int num,i;
	int flag;
	flag = 0;
	printf("Enter the number: ");
	scanf("%d",&num);
	for ( i = 2; num; i++){
		if (num%i==0){
			printf("Not a prime number");
			break;
			}
		else{
		printf("Prime number\n");
		break;
		}
		}
		
	return 0;
}
