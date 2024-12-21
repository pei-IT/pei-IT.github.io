#include<stdio.h>
int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);

    int i,j;
    printf("*\n"); //印第一行:1顆*

    for(i=0;i<=n-3;i++){ //空心直角三角形中間印空格的行數為n-3，印第2到n-1行
        printf("*");
        for(j=1;j<=i;j++){ //印i個空格
            printf(" ");
        }
    printf("*\n");
    }
    for(j=1;j<=n;j++){ //印第n行:n顆*
    printf("*");
    }

    printf("\n");
    return 0;

}
