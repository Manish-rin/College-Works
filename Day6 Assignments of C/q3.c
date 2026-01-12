//To find area of a triangle
#include <stdio.h>
int main()
{
    float b,h,area;
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f",&b,&h);
    area=(b*h)/2;
    printf("The area of the triangle is %.2f",area);
    return 0;
}
