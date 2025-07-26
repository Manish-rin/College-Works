#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Printing only odd numbers from the array:\n");
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            continue; // Skip even numbers
        }
        printf("%d ", numbers[i]);
    }
    printf("\nOperation completed.\n");
    return 0;
}

/*#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
        }
        printf("%d ", i);
    }
    printf("\nLoop terminated with break statement.\n");
    return 0;
}*/


/*#include <stdio.h>
int main() {
    printf("Printing even numbers between 1 and 10:\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue;
        }
        printf("%d is even.\n", i);
    }
    printf("Loop completed.\n");
    return 0;
}*/






