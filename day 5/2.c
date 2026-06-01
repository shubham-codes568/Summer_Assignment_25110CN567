#include<stdio.h>
int factorial(int n){
    int i, fact = 1;
    for(i=1; i<=n; i++)
        fact = fact * i;
    return fact;
}
int main(){
    int num, temp, remainder, sum = 0;
    printf("enter a number:");
    scanf("%d",&num);
    temp = num;
    while(temp!=0){
        remainder = temp % 10;
        sum = sum + factorial(remainder);
        temp = temp / 10;
    }
    if(sum==num)
        printf("the number is a strong number");
    else
        printf("the number is not a strong number");
    return 0;
}