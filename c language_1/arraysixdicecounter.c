#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int counter[6]={0}; //陣列宣告6個元素與全部皆初始化為0
    int i,j;
    for(i=1;i<=6000;i++){
        int dice=rand()%6+1;
        for(j=1;j<=6;j++){ //ln11至ln15簡化為counter[dice-1]++;
            if(dice==j){ //簡化switch語法，先轉為6個if敘述，當dice=1到6其中一個點數，將計數器加1
            counter[j-1]++; //計數器索引=點數-1=j-1
            }
        }
    }
    for(j=1;j<=6;j++){
        printf("%d: %d\n" ,j ,counter[j-1]); //簡化printf語法,dice1到6改為%d
    }
    return 0;
}
