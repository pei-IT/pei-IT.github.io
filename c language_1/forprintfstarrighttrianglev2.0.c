#include<stdio.h>
int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);

    int i,j;
    printf("*\n"); //�L�Ĥ@��:1��*

    for(i=0;i<=n-3;i++){ //�Ťߪ����T���Τ����L�Ů檺��Ƭ�n-3�A�L��2��n-1��
        printf("*");
        for(j=1;j<=i;j++){ //�Li�ӪŮ�
            printf(" ");
        }
    printf("*\n");
    }
    for(j=1;j<=n;j++){ //�L��n��:n��*
    printf("*");
    }

    printf("\n");
    return 0;

}
