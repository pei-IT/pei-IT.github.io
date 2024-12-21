#include<stdio.h>
#include<stdlib.h> //srand函數函式庫
#include<time.h> //time函數函式庫
int main(){ //time(time_t* timer)(指標參數 參數名稱),同一秒鐘執行才會產生一樣數字
    srand(time(0)); //srand(unsigned int seed(亂數種))初始化亂數產生器,亂數種數字相同產生的亂數仍相同
    int i;
    for(i=1;i<=5;i++){
        printf("%d\n",rand());
    }
    return 0;

}
