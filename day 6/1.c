#include<stdio.h>
int main(){ 
    int n, binaryNum[100], i = 0;
    printf("enter a number:");
    scanf("%d", &n);
    if(n == 0) {
        printf("binary representation: 0");
        return 0;
    }
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("binary representation: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    return 0;
}