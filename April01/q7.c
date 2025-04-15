#include <stdio.h>
#include <math.h>
void armstrong(int lower_limit, int upper_limit){
	int cube_number,sum_of_cubes,length, i,temp;
	   for (i = lower_limit; i <= upper_limit; i++){
		temp = i;
		
		length = 0;
		while(temp!=0){
			temp = temp / 10;
			length++;
			}
			
		temp = i;
		
		sum_of_cubes = 0;
		while(temp!=0){
			sum_of_cubes += pow(temp % 10, length);
			temp = temp / 10;
			}	
				
			if (sum_of_cubes == i){
					printf("%d, ",i);
					}				
		}
	}

int prime(int,int);	
int prime(int a, int b){
	int i;
	for ( int j = a; j<=b; j++){
		if(j<2) continue;
		int isPrime = 1;
		
	for ( i = 2; i*i<= j; i++){
		if (j%i==0){
			isPrime = 0;
			break;
			}
		}
		if(isPrime){
			printf("%d is a prime number\n",j);
		}
		}
int main(){
int opt;
		printf("For armstrong calculation press 1\nFor prime number press 2: ");
		scanf("%d",&opt);
		
		if (opt ==1){
		int lower_limit, upper_limit;
		printf("Enter the lower limit and upper limit followed by space respectively : ");
		scanf("%d %d", &lower_limit,&upper_limit);
		armstrong(lower_limit,upper_limit);	
		}
		
		else{
		int ll = 1, hl = 20;
		printf("Hi");
		prime(ll,hl);
			}
	return 0;			
}
		
