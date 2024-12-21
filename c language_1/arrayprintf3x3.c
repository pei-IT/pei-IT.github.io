#include<stdio.h>

int main(){
    int i,j,a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ //也可以寫迴圈指定每個a[i][j]的數值
            a[i][j]=i*3+j+1; //索引號為獨一無二的值,用索引號推估值為多少,通常跟同一個橫列有多少元素有關
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", a[i][j]); //印出順序第一列元素123換行、第二列456、第三列789
        }
        printf("\n");
    }
    return 0;
}
