//Check given number is even or not?
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    (n%2==0)?printf("The number is even"):printf("The number is odd");
    return 0;
}
