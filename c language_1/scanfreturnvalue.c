#include<stdio.h>

int main(){
    int num;
    while(scanf("%d", &num)!=1){ //scanf()函式回傳值1=true、非1=false
        printf("Error: invalid input\n"); //如果輸入abc寫入stdin檔案，因為abc寫入後一直存在第一行沒有被讀入，會變成無窮迴圈印出錯誤訊息
    }
    printf("%d\n", num);
    return 0;
}
