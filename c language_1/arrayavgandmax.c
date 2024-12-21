#include<stdio.h>

int avg10(int a[10]);
int max10(int a[10]); //將計算與輸入分開,用函數寫法增加可讀性與擴充性

int main(){
    int i,a[10];
    for(i=1;i<=10;i++){
        scanf("%d", &a[i-1]); //索引編號為順序編號i-1
    }
    printf("Max: %d\n", max10(a)); //陣列參數傳送用陣列名稱a去傳
    printf("Avg: %d\n", avg10(a));
    return 0;
}

int max10(int a[10]){ //函式參數也可以使用陣列
    int i,max=a[0]; //max預設為第一個的值,避免最大值出現錯誤
    for(i=1;i<10;i++){ //i要調整從索引編號1開始
        if(a[i]>max){
        max=a[i];
        }
    }
    return max;
}
int avg10(int a[10]){
    int i,avg,sum=a[0];
    for(i=1;i<10;i++){
        sum+=a[i];
    }
    avg=sum/10;
    return avg;
}
