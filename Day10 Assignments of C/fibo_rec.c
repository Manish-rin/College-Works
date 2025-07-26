#include <stdio.h>

int fibo(int);
int fibo(int n) {
    if(n <= 1) {
        return n;
    }
    return fibo(n-1) + fibo(n-2);  // Fixed recursive formula
}

int main() {
    int n = 5;
    for(int i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }
    return 0;
}
