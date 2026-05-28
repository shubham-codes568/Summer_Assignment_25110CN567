#include<stdio.h>
int main(){
    int num, count=0;
    printf("enter a number:");
    scanf("%d",&num);
    if(num==0){
        count=1;
    }
    while(num!=0){
        num=num/10;
        count++;
    }
    printf("the number of digits in the number is %d",count);   
    return 0;
}
