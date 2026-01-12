//write  a prgram in c to swp between two numbers without using third variable
//Date: 11/02/25

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The first number is %d\n",a);
    printf("The second number is %d\n",b);
    return 0;
}
