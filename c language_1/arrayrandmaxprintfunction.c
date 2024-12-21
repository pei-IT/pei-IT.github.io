#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printarray(int[10]);
void arrayrand(int[10]);
int arraymax(int[10]);

int main(){
    srand(time(0)); //初始化亂數種
    int v[10]; //陣列初始化或賦值時=右邊不能直接放陣列,因為陣列不能直接複製
    arrayrand(v);
    arrayprint(v);
    printf("Max: %d\n", arraymax(v));
    return 0;
}

void arrayrand(int v[10]){ //函式回傳值不能是陣列型態(int[10]arrayrand(int v[10]))=語法錯誤,但參數可以
    int i;
    for(i=0;i<10;i++){
        v[i]=rand()%100;
    }
}

int arraymax(int v[10]){
    int max=v[0],i;
    for(i=1;i<10;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}

void arrayprint(int v[10]){
    int i;
    for(i=0;i<10;i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}
