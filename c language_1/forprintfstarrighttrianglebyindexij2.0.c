#include<stdio.h>
    int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);

    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==n||j==n||i+j==n+1){ //判斷(高注標j都是n或底i注標都是n或i+j等於n+1時印出*)
            printf("*");
            } else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
