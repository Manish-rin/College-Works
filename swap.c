#include <stdio.h>
int main(){
    int a = 5, b = 3, temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of a and b is %d %d:",a,b);
}
