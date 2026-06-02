#include<stdio.h>
int main(){
    int x, n;
    long long result = 1;
    printf("enter a number:");
    scanf("%d",&x);
    printf("enter the power:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        result=result*x;
    }
    printf("%d raised to the power of %d is: %lld", x, n, result);
    return 0;
}

