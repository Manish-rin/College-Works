#include <stdio.h>

int sum_of_series(int n) {
    // Base case: sum of 0 terms is 0
    if(n <= 0)
        return 0;
    // Recursive case: current number + sum of previous numbers
    return n + sum_of_series(n - 1);
}

int main() {
    int n=5;

    printf("Sum of first %d natural numbers = %d\n", n, sum_of_series(n));
    return 0;
}
