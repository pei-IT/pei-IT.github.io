#include<stdio.h>
    int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);

    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||j==n||i==j){ //空心右上直角三角形:判斷(高注標j都是n或底i注標都是1或i等於j時印出*)
            printf("*");
            } else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
