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
        v[i]=n[i]; //用迴圈複製陣列元素，因為元素為整數型態所以可以複製
    }
    printarray(n);
    printarray(v);
    return 0;
}
void printarray(int t[10]){ //函式內陣列t跟傳入的陣列n是同一份，C語言函式傳入陣列不會複製一份
    int i;
    for(i=0;i<10;i++){
        printf("%d ", t[i]);
    }
    printf("\n");
}
