#include<stdio.h>
int main(){
    int i, j, k, n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c ",'A'+j-1);
        }
        for(k=i-1;k>=1;k--){
            printf("%c ",'A'+k-1);
        }
        printf("\n");

    }
    return 0;
}