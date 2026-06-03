#include<stdio.h>
int reverse(int n, int rev){
    if(n==0){
        return rev;
    }
    else{
        rev=rev*10 + n%10;
        return reverse(n/10, rev);
    }
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
int result = reverse(num, 0);
    printf("reverse of the number is: %d", result);
    return 0;
}