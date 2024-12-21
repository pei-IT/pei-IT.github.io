#include<stdio.h>
void printf_star(int i);
void printf_triangle(int n);

int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);
    printf_triangle(n); //模組化，過度模組化會造成抽象化
    return 0;
}

void printf_triangle(int n){ //void代表函式沒有回傳值，主要需要函式的副作用:印出換行
    int i;
        for(i=1;i<=n;i++){
            printf_star(i); //模組化，增加程式可讀性
            printf("\n"); //函式沒有回傳值 return;可省略
        }
}
void printf_star(i){
    int j;
        for(j=1;j<=i;j++){
            printf("*");
        }
}
