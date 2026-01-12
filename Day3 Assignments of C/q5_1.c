//Write a program in c to cmpare two integer values using conditional operators(ternary operator).
//Date: 11/02/25

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    (a>b)?printf("First number is greater"):printf("Second number is greater");
    return 0;
}
