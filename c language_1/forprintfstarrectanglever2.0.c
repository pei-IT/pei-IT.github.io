#include<stdio.h>
int main(){
    int n,i,j;
    printf("N = ");
    scanf("%d",&n);

    for(j=1;j<=n;j++){ //頭:印出n顆*
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n-2;i++){ //n*n空心正方形中間印空格要重複n-2次
        printf("*");
        for(j=1;j<=n-2;j++){ //中間空心空格印n-2次
            printf(" ");
        }
    printf("*\n");
    }
    for(j=1;j<=n;j++){ //尾:印出n顆*
    printf("*");
    }
    printf("\n");
    return 0;

}
