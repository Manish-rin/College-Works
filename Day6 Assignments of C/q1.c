//Write a program in c to find out the greatest among 3 numbers without using conditional operators, logical operators and ternary operators.
#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if(a>b){
        if (a>c)
        max=a;
    }
    if(b>a){
        if (b>c)
        max=b;
    }

    if (c>a){
        if (c>b)
        max=c;
    }
    printf("The largest number is %d",max);
    return 0;
}
