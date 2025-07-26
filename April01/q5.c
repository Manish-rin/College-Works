#include <stdio.h>
void swap(int a, int b){
int temp;
	temp = a;
	a = b;
	b = temp;
	printf("The number after swapping is %d and %d",a,b);
	}
	
	int main(){
	int a = 10, b = 20;
	swap(a,b);
	return 0;
	}
