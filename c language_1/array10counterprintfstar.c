#include<stdio.h>
int main(){
    int i,j,n,a[10]={0}; //a陣列當計數器初始值為0
    for(i=1;i<=10;i++){
        scanf("%d", &n);
        a[(n-1)/10]++; //每次存放一個n就把對應的計數器+1,反過來想那些數字*10,/10後商數是1,與原區間差值為1
    }
    for(i=1;i<=10;i++){ //i代表區間,總共10個區間
        printf("%3d: ",i*10); //顯示區間編號,計數器編號*10;printf格式化:%3d代表整數會佔3個字元,不滿3格前面補空格
        for(j=1;j<=a[i-1];j++){ //區間-1=a[計數器編號]=計數器內的個數
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
