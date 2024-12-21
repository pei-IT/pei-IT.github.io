#include<stdio.h>
int main(){
    int number;
    for(number=1;number<=10;number++){ //迴圈執行10次，從1到10
        if(number%2==1){ //條件成立才印出，印出5次，if扮演的腳色類似過濾
            printf("%d\n",number);
        }

    }
    return 0;
}
