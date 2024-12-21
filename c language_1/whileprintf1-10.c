#include<stdio.h>
int main(){
    int count=1;
    while(count<=10){ //最後一次count=11>10跳出迴圈
        printf("%d\n",count);
        count=count+1; //程式中同樣的規則重複做=迴圈
    }
    return 0;
}
