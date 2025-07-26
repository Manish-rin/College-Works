#include <stdio.h>
int main(){
    int n;
    int m;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of m to divide %d: ",n);
    scanf("%d",&m);
    printf("After dividing %d by %d we get %d and the remainder is %d",n,m,n/m,n%m);
}
