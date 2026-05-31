#include<stdio.h>
#include<math.h>
int main(){
    int start, end, i, num, original, remainder, n, result;
    printf("enter the starting number:");
    scanf("%d",&start);
    printf("enter the ending number:");
    scanf("%d",&end);
    printf("armstrong numbers between %d and %d are:\n", start, end);
    for(i=start; i<=end; i++){
        num=i;
        original=num;
        n=0;
        result=0;
        while(original!=0){
            original=original/10;
            n++;
        }
        original=num;
        while(original!=0)
        {
            remainder=original%10;
            result=result+pow(remainder,n);
            original=original/10;
        }
        if(result==num){
            printf("%d ", num);
        }
    }
return 0;
}