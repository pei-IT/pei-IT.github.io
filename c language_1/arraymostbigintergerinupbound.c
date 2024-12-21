#include<stdio.h>
int main(){
    int i,q,a[10];
    for(i=1;i<=10;i++){ //i代表輸入順序編號
        scanf("%d",&a[i-1]);
    }
    while(1){ //max_i=-1,改成存放索引號,索引號範圍一定於0至9之間
    int max_i=-1; //每次查詢存放索引號max_i皆須初始化為-1,所以要在while迴圈內宣告
    printf("Q: ");
    scanf("%d",&q);
        if(q==0){
            break;
        }
            for(i=0;i<10;i++){ //max_i==-1代表是第一個找到,新的比原本的還要大一樣換掉
                if(a[i]<=q&&(max_i==-1||a[i]>a[max_i]){ //或者(||)短路求值,當前面符合條件,後面的就不會做,所以不會有a[-1]未定義行為產生
                    max_i=i;
                }
            }
            if(max_i!=-1){ //max預設值必須比輸入的10個整數還要小,同時也不能相等
               printf("%d\n",a[max_i]);
            }
    }
    return 0;
}
