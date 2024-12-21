#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printarray(int[10]);
void arrayrand(int[10]);
int arraymax(int[10]);

int main(){
    srand(time(0)); //��l�ƶüƺ�
    int v[10]; //�}�C��l�Ʃν�Ȯ�=�k�䤣�ઽ����}�C,�]���}�C���ઽ���ƻs
    arrayrand(v);
    arrayprint(v);
    printf("Max: %d\n", arraymax(v));
    return 0;
}

void arrayrand(int v[10]){ //�禡�^�ǭȤ���O�}�C���A(int[10]arrayrand(int v[10]))=�y�k���~,���Ѽƥi�H
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
