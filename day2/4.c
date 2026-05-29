#include<stdio.h>
int main(){
    int num, original, rev=0, rem;
    printf("enter a number:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(original==rev){
        printf("the number is a palindrome");
    }
    else{
        printf("the number is not a palindrome");
    }
    return 0;
}