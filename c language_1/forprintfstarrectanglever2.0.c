#include<stdio.h>
int main(){
    int n,i,j;
    printf("N = ");
    scanf("%d",&n);

    for(j=1;j<=n;j++){ //�Y:�L�Xn��*
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n-2;i++){ //n*n�Ťߥ���Τ����L�Ů�n����n-2��
        printf("*");
        for(j=1;j<=n-2;j++){ //�����ŤߪŮ�Ln-2��
            printf(" ");
        }
    printf("*\n");
    }
    for(j=1;j<=n;j++){ //��:�L�Xn��*
    printf("*");
    }
    printf("\n");
    return 0;

}
