#include<stdio.h>
    int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);

    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==n||j==n||i+j==n+1){ //�P�_(���`��j���On�Ω�i�`�г��On��i+j����n+1�ɦL�X*)
            printf("*");
            } else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
