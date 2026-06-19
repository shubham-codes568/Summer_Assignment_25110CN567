#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    char maxChar;
    int maxFreq = 0;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = i;
        }
    }

    printf("Maximum Occurring Character: %c\n", maxChar);
    printf("Frequency: %d", maxFreq);

    return 0;
}