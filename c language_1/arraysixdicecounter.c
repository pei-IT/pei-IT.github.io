#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int counter[6]={0}; //�}�C�ŧi6�Ӥ����P�����Ҫ�l�Ƭ�0
    int i,j;
    for(i=1;i<=6000;i++){
        int dice=rand()%6+1;
        for(j=1;j<=6;j++){ //ln11��ln15²�Ƭ�counter[dice-1]++;
            if(dice==j){ //²��switch�y�k�A���ର6��if�ԭz�A��dice=1��6�䤤�@���I�ơA�N�p�ƾ��[1
            counter[j-1]++; //�p�ƾ�����=�I��-1=j-1
            }
        }
    }
    for(j=1;j<=6;j++){
        printf("%d: %d\n" ,j ,counter[j-1]); //²��printf�y�k,dice1��6�אּ%d
    }
    return 0;
}
