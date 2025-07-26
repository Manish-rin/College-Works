#include <stdio.h>
int main(){
    float a,b,c,avg;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the third number: ");
    scanf("%f",&c);
    printf("The average of %.2f,%.2f and %.2f is %.2f",a,b,c,(a+b+c)/3);

}
