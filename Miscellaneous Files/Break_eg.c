#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    printf("Searching for %d in the array...\n", target);
    for (int i = 0; i < 10; i++) {
        printf("Checking index %d: %d\n", i, numbers[i]);
        if (numbers[i] == target) {
            printf("Target %d found at index %d!\n", target, i);
            break; // Exits the loop once the target is found
        }
    }
    printf("Search operation completed.\n");
    return 0;
}


