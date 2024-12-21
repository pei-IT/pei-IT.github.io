#include<stdio.h>
int main(){
    int i,a[10];
    for(i=1;i<=10;i++){ //i代表輸入順序編號
        scanf("%d",&a[i-1]);
    }
    while(1){
    int l,r;
    printf("L R: ");
    scanf("%d%d",&l,&r);
        if(l==0&&r==0){
            break;
        }
        printf("Ans: ");
            for(i=0;i<10;i++){ //i代表陣列索引編號。數陣列,從0開始數,小於陣列長度10
                if(a[i]>=l&&a[i]<=r){
                printf("%d ",a[i]);
                }
            }
        printf("\n");
    }
    return 0;
}
