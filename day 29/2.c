#include <stdio.h>

int main() {
    int arr[100], n, i, choice, sum = 0;
    int largest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Find Largest Element\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3:
                largest = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > largest)
                        largest = arr[i];
                }
                printf("Largest Element = %d\n", largest);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}