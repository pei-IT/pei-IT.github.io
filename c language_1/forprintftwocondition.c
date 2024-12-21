#include<stdio.h>
int main(){
    int number;
    for(number=2;number<=10;number+=2){ //迴圈執行5次，過濾嫌疑犯2,4,6,8,10
        if(number%3!=0){ //條件成立才印出，印出4次，if扮演的腳色類似過濾
            printf("%d\n",number);
        }
    }
    return 0;
}
