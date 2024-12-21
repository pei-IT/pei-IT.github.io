#include<stdio.h>

int main(){
    int v[5]={1,2,3,4,5};
    int *n; //變數n存放整數記憶體位址型態
                           //ln7另一種寫法n!=v+5;
    for(n=v;n!=&v[5];n++){ //v陣列隱性轉型&v[0]賦值給n，當n不等於陣列結尾v[5]的位址時n+1往後移一格至&v[0+1]
        printf("%d\n", *n); //printf("%d\n", *n++);
    }
    return 0;
}
