#include<stdio.h>
int main(){
    int num, i, sum = 0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1; i<=num/2; i++) {
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num&&num!=0)
        printf("the number is a perfect number");
    else
        printf("the number is not a perfect number");
    return 0;
}