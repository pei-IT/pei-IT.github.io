#include<stdio.h>
    int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);

    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||j==n||i==j){ //�Ťߥk�W�����T����:�P�_(���`��j���On�Ω�i�`�г��O1��i����j�ɦL�X*)
            printf("*");
            } else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
