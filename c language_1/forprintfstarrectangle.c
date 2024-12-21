#include<stdio.h>
int main(){
    int n,i,j;
    printf("N = ");
    scanf("%d",&n); //i,jぃ跑计n跑计
    for(i=1;i<=n;i++){ //北琍琍计(i,j)=(1,1),(2,1),(3,1)
        for(j=1;j<=n;j++){ //北琍琍︽计=(1,1),(1,2),(1,3)
        printf("*");
        }
    printf("\n");
    }
    return 0;

}
