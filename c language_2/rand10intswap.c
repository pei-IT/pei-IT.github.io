#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int i,n[10];
    for(i=1;i<=10;i++){
        n[i-1]=i; //皚110逼
    }
    for(i=1;i<=10;i++){
        int j=rand()%(11-i)+i; //ノユ传跋,ノ筁┕玡传オ娩,传Чノ筁,⊿ノ筁┕传,i单癬翴材计
        int temp=n[i-1];
        n[i-1]=n[j-1];
        n[j=1]=temp;
        printf("%d ", n[i-1]);
    }
    printf("\n");
    return 0;
}
