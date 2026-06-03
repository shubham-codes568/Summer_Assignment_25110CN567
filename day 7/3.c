#include<stdio.h>
int sumOfDigits(int num){
    if(num==0){
        return 0;
    }
    else{
        return (num%10) + sumOfDigits(num/10);
    }
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num<0){
        num=-num; // Convert to positive if the number is negative
    }
    printf("sum of the digits is: %d", sumOfDigits(num));
    return 0;
}