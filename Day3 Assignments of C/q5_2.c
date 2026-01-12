//Write a program in c to cmpare two integer values using logical operators
//Date: 11/02/25
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if(a&&b&&(a>b))
        printf("First number is greater");
    else
        printf("Second number is greater");
}


