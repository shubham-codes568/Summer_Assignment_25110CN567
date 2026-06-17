#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    printf("Reversed string: ");
    for (i = length - 2; i >= 0; i--) { 
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}