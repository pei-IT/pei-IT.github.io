#include<stdio.h>
int main(){
    int n,i,j;
    printf("N = ");
    scanf("%d",&n); //i,j�����P�ܼơAn�W�����ۦP�ܼ�
    for(i=1;i<=n;i++){ //����P�P�C�ơA(i,j)=(1,1),(2,1),(3,1)
        for(j=1;j<=n;j++){ //����P�P���=(1,1),(1,2),(1,3)
        printf("*");
        }
    printf("\n");
    }
    return 0;

}
