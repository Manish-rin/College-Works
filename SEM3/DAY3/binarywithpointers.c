#include <stdio.h>
int binary_pointer(int *arr, int left, int right, int key) {
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if (*(arr + mid) == key)
        return mid;
    else if (*(arr + mid) > key)
        return binary_pointer(*arr, left, mid - 1, key);
    else
        return binary_pointer(*arr, mid + 1, right, key);
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 20;
    int result = binary_pointer(*arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}
