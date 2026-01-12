#include <stdio.h>
int main(){
    int n = 3, x = 2,k,final_denominator = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        int term_sum = 0;
        for (int j = 1; j <= i; j++){
            int final_numerator = 0;
            for (int k = 1; k <= j; k++){
                int numerator = x * k;
                final_numerator = final_numerator + numerator;
            }
            while(j>=1){
                if (j==1){
                    int denominator = 1;
                }
                else{
                    int denominator = j;
                    int final_denominator = final_denominator * denominator;
                }
            }
            term_sum = term_sum + (final_numerator/final_denominator);
        }
        sum = sum + term_sum;
    }
    printf("The sum is %d",sum);
}
