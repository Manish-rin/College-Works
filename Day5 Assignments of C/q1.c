//largest among 3 numbers
//Date 19/02/25 (Group 1 and Group 2)
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if(a>b&&a>c)
        printf("The largest number is %d",a);
    else if(b>a&&b>c)
        printf("The largest number is %d",b);
    else
        printf("The largest number is %d",c);
    return 0;
}
