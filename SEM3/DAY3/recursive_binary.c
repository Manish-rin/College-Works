#include <stdio.h>
int binaryS(int *arr, int left, int right, int key) {
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binaryS(arr, left, mid - 1, key);
    else
        return binaryS(arr, mid + 1, right, key);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    int result = binaryS(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
}
