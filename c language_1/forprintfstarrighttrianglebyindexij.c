#include<stdio.h>
    int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);

    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==n||j==1||i==j){ //�P�_(���`��j���O1�Ω�i�`�г��On��i����j�ɦL�X*)
            printf("*");
            } else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
