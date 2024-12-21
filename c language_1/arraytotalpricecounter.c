#include<stdio.h>
int main(){
    int price[]={90,75,83,89,71,42}; //陣列可以透過讀檔或是從外部輸入資料進行修改,不用修改程式碼邏輯運算
    int total=0,id;
    while(1){ //無窮迴圈
        scanf("%d", &id);
        if(id==0){
            break; //if(條件)id=0,強制跳出迴圈,因為超過陣列索引範圍price[-1]會產生未定義行為
        }
        total+=price[id-1];
    }
    printf("Total: %d\n", total);
    return 0;
}
