#include<stdio.h>
int i, j, rows;
int main(){
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}