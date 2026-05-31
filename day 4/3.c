#include<stdio.h>
int main(){
    int num, original, remainder, n=0;
    int   result=0;
    printf("enter a number:");
    scanf("%d",&num);
    original=num;
    while(original!=0){
        original=original/10;
        n++;
        original=num;
        while(original!=0)
        {
            remainder=original%10;
            result=result+pow(remainder,n);
            original=original/10;
        }
        if(result==num){
            printf("the number is an armstrong number");
        }
        else{
            printf("the number is not an armstrong number");
        }
        
    }
return 0;
}   