#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the third number: ");
    scanf("%f",&c);
    printf("Enter the fourth number: ");
    scanf("%f",&d);
    printf("The ratio of (%.2f + %.2f) / (%.2f + %.2f) is %.2f",a,b,c,d,(a+b)/(c+d));
}
