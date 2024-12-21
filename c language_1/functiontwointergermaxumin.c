#include<stdio.h>
int max2(int, int); //max定義在main後面，所以要先宣告

int main(){
        int a,b,max;
        printf("please enter first interger: ");
        scanf("%d",&a);
        printf("please enter second interger: ");
        scanf("%d",&b);
        printf("the maxinum: %d.\n",max2(a,b)); //複製a,b的值給max2中x,y變數
        return 0;
}
int max2(int x,int y){ //回傳整數型態 函式名稱(兩個整數參數)，變數名稱可以跟主程式一樣為a,b
    int max;
        if(x>=y){
            max=x; //return x;可以省略max變數
        } else{
            max=y; //return y;
        }
    return max;
}
