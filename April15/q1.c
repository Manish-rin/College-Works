//Q1. Write a program in C to perform 
//a. Addition and substraction of two complex numbers. 
#include <stdio.h>
struct calc{
    float real;
    float imaginary;   
};
struct calc calculation[1];
int main(){
    for(int i = 0; i<2; i++){
        printf("Enter the value of real part: ");
        scanf("%f",&calculation[i].real);
        printf("Enter the value of imaginary part: ");
        scanf("%f",&calculation[i].imaginary);

        printf("The complex number is: %f\n",calculation[i].real+calculation[i].imaginary);

    }
    
}