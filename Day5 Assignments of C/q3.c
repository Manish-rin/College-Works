// Find the roots of quadratic equations
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float d, x1, x2;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots of the quadratic equation are %f and %f", x1, x2);
    }
    else if (d == 0)
    {
        x1 = (-b) / (2 * a);
        printf("The root of the quadratic equation is %f", x1);
    }
    else
    {
        printf("The quadratic equation has imaginary roots");
    }
    return 0;
}
