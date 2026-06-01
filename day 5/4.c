#include<stdio.h>
int main(){
    long long num;
    long long largestfactor = -1;
    printf("enter a number:");
    scanf("%lld",&num);
    while(num%2==0) {
        largestfactor = 2;
        num = num/2;
    }
    for(long long i=3; i*i<=num; i=i+2) {
        while(num%i==0) {
            largestfactor = i;
            num = num/i;
        }
    }
    if(num>2)
        largestfactor = num;
    printf("the largest prime factor is: %lld", largestfactor);
    return 0;
}