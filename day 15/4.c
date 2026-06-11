#include <stdio.h>

int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    
    while (j < n) {
        arr[j++] = 0;
    }

    printf("Array after moving zeroes to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}