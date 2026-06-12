#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6; 
    int sum = 0, expectedSum, missing;

    for (int i = 0; i < n - 1; i++) {
        sum =sum + arr[i];
    }

    expectedSum = n * (n + 1) / 2;
    missing = expectedSum - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}