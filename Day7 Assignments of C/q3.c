#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int k = 1; k <= n; k++) {
        int term_sum = 0;
        for (int i = 1; i <= k; i++) {
            term_sum = term_sum + i;
        }
        sum = sum + term_sum;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
