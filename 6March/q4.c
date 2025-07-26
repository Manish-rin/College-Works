#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm, i;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Finding GCD
    for (i = (num1 < num2 ? num1 : num2); i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;
        }
    }

    // Finding LCM
    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
