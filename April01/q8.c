#include <stdio.h>
int gcd(int a, int b){
	if (b ==0){
	return a;
	}
	return gcd(b,a%b);
	}
	
int lcm(int a, int b){
	int numerator = a*b;
	int denominator = gcd(a,b);
	return numerator/denominator;
	}
	
int main(){
	int a=56, b = 98;
	printf("The GCD is %d\n",gcd(a,b));
	printf("The LCM is %d\n",lcm(a,b));	
	return 0;
	}
	
	
	
