#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float average = 0;
    printf("Enter positive numbers (negative to end):\n");

    while (scanf("%d", &num) == 1 && num >= 0) {
        sum += num;
        count++;
    }

    if (count > 0) {
        average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No positive numbers entered!\n");
    }

    return 0;
}
