#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printarray(int [10]);
int main(){
    int i,v[10],n[10];
    srand(time(0));
    for(i=0;i<10;i++){
        n[i]=rand()%100;
    }
    for(i=0;i<10;i++){
        v[i]=n[i]; //�ΰj��ƻs�}�C�����A�]����������ƫ��A�ҥH�i�H�ƻs
    }
    printarray(n);
    printarray(v);
    return 0;
}
void printarray(int t[10]){ //�禡���}�Ct��ǤJ���}�Cn�O�P�@���AC�y���禡�ǤJ�}�C���|�ƻs�@��
    int i;
    for(i=0;i<10;i++){
        printf("%d ", t[i]);
    }
    printf("\n");
}
