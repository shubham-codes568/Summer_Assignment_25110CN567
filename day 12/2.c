#include <stdio.h>

int armstrong(int num)
{
    int original = num, remainder, result = 0;

    while (original != 0)
    {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }

    return (result == num);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}