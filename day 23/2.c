#include <stdio.h>

int main() {
    char str[100];
    int visited[256] = {0};

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(visited[(unsigned char)str[i]]) {
            printf("First Repeating Character: %c", str[i]);
            return 0;
        }
        visited[(unsigned char)str[i]] = 1;
    }

    printf("No Repeating Character Found");
    return 0;
}