  //Write  a program in C to calculayte 1 + (1+2) +.......+ (1+2+.....+n) where n is given by the user
  /*#include <stdio.h>
  #include <math.h>
  int main(){
  int n, i;
  double sum,sumf;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  sumf = n;
  i = 1;
  while(i <= n){
     sum = pow(i,n);
     sumf = sumf + sum;
	  i++;
	  n= n -1;
	  }
	printf("The sum is %lf",sumf);	
	}*/
	
#include <stdio.h>
int main(){
int n, i, sum=0,j;
printf("Enter the value of n: ");
scanf("%d",&n);
for (i = 1; i <= n; i++){
	for (j = 1; j<=i;j++){
	sum = sum + j;
		}
	}
	printf("The result is %d", sum);
	return 0;
	

}
