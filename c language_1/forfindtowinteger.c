#include<stdio.h>
    int main(){
    int i,j;
    for(i=1;i<=30/2;i++){ //因為i+j=30，所以i跟j不會超過15，可以縮小候選者搜尋範圍
        for(j=30/2;j<=30;j++){
            if(i+j==30&&i*j==221){ //或是增加i<j條件，只印出一組數字
                printf("%d, %d\n",i,j);
            }
        }
    }
    return 0;
    }
