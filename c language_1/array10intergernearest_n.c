#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,q,a[10];
    for(i=1;i<=10;i++){ //i代表輸入順序編號
        scanf("%d",&a[i-1]);
    }
    while(1){
    printf("Q: ");
    scanf("%d",&q);
        if(q==0){
            break;
        }
        int nearest_n=a[0],nearest_d=abs(q-a[0]); //abs()算絕對值函數
        for(i=1;i<10;i++){ //將n[0]預設為最接近的元素,陣列改從n[1]開始數
            int d=abs(q-a[i]); //用變數d取代原if(條件)內多個abs()函式
            if((d<nearest_d||d==nearest_d&&a[i]<nearest_n)){ //當最新的比原本的還要近,或者最新的跟原本的一樣近且比原本還要小
                nearest_d=d;
                nearest_n=a[i];
            }
        }
        printf("%d\n",nearest_n);
    }
    return 0;
}
