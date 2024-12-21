#include<stdio.h>
int main(){
    int i=3;
    printf("%d\n",i); //往上看找近的,印出i=3
    if(i==3){
        i=i+1; //i=3+1=4
        int i=6;
        printf("%d\n",i); //往上看找近的,i=6or4,印出i=6
        i=i+1; //往上看找近的i=6+1=7
    }
    if(i==3){
        printf("%d\n",i); //往上看i=7or4,因為if{}被mina{}包住,所以i=4不執行印出
    }
    return 0;
}
