#include <stdio.h>
void fibo(int);
void fibo(int n){
	int t1=0,t2=1,next_term;
	for(int i=1;i<=n;i++){
		printf("%d ",t1);
		next_term = t1 + t2;
		t1 = t2;
		t2= next_term;
	}

	}


int main(){
	int n = 5;
	fibo(n);
	//printf("THe fibonacci series till %d is %d",n,fibo(n));
	return 0;
	}
