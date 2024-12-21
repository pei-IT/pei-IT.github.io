#include<stdio.h>

void swap(int *,int *);
void sort(int *,int *);

int main(){
    int a=5,b=3;
    sort(&a,&b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

void sort(int *a,int *b){
    if(*a>*b){ //所以&*可以互相抵消
        swap(a,b); //&*a,&*b，*a代表間接取得位於該記憶體位址變數a的值，再&取址又變回存放a記憶體位址的指標變數
    }
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
