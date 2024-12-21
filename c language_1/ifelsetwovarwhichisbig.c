#include<stdio.h>
int main(){
    int a,b;
    printf("Please enter a or b: ");
    scanf("%d%d", &a,&b);
    if(a>b){
        printf("a>b\n");
    } else if(a<b){ //因為else{}內只包含一個if述句,所以大括號{}可省略
        printf("a<b\n");
    } else{ //因為前面兩個if判斷後a一定等於b,所以if(a==b)可省略
        printf("a=b\n");
    }
    return 0;
}
