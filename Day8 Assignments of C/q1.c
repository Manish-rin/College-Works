#include <stdio.h>
int main(){
    int number = 12678,sum = 0, reverse = 0;
    int temp = number;
    while (temp > 0){
        int last_digit = temp % 10;
        reverse = reverse * 10 + last_digit;
        temp = temp / 10;
        //Now lets get the sum of each digit
         sum = sum + last_digit;
}
    if (reverse == number){
        printf("%d is a palindrome number\n", number);
        printf("The sum of digits is %d", sum);
    }
    else{
        printf("%d is not a palindrome number\n", number);
        printf("The sum of digits is %d", sum);

    }
    return 0;
}
