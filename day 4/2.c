#include<stdio.h>
int main(){
    int n, i;
    int first = 0, second = 1, next;
    printf("enter the value of n:");
    scanf("%d",&n); 
    if(n==0)
    printf("fibonnaci term is: %d", first);
    else if(n==1)
    printf("fibonnaci term is: %d", second);
    else {
        for(i=2; i<=n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("fibonnaci term is: %d", second);
    }
    return 0;
}