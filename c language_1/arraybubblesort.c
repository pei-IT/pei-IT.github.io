#include<stdio.h>

int main(){
    int i,j,bubble[5]; //獁猨逼祘Α絏耕芠
    for(i=0;i<5;i++){
    scanf("%d", &bubble[i]);
    }

    for(i=0;i<4;i++){ //5俱计羆惠4近獁猨逼,i眖0~3
        for(j=0;j<4-i;j++){ //芠糶猭:j<4;,5俱计–近斗ユ传4Ω,–秈︽近碞ぶユ传Ω
            if(bubble[j]>bubble[j+1]){ //狦筳纠ゑヘ玡碞ユ传
                int temp=bubble[j]; //ㄢ跑计swap
                bubble[j]=bubble[j+1];
                bubble[j+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
    printf("%d ", bubble[i]); //眖逼き俱计
    }
    return 0;
}
