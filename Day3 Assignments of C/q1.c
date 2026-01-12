//write a program in c to add,subtract,multiply between integer and floating point numbers.
#include <stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("The sum of %d and %f is %f",a,b,a+b);
    printf("\nThe difference of %d and %f is %f",a,b,a-b);
    printf("\nThe product of %d and %f is %f",a,b,a*b);
    return 0;
}
