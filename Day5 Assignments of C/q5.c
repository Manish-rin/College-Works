//Check whether the number is positive,negative or zero
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    (n>0)?printf("The number is positive"):((n<0)?printf("The number is negative"):printf("The number is zero"));
    return 0;
}
