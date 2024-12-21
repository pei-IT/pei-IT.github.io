#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int v[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,k=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ //r會決定剩下中的哪一個索引號進行交換
            int r=rand()%(9-k)+k; //從v[0][0]開始從剩下的9格中包含自己,找一格交換,每次都從剩下的找一格交換
            int m=r/3; //用r反推縱坐標
            int n=r%3; //用r反推橫坐標
            int temp=v[i][j];
            v[i][j]=v[m][n];
            v[m][n]=temp;
            k++; //往後走一格
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", v[i][j]); //印出順序第一列元素123換行、第二列456、第三列789
        }
        printf("\n");
    }
    return 0;
}
