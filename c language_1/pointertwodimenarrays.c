#include<stdio.h>

void print(int **v, int height, int width){
    int i,j;
    for(i=0;i<height;i++){
        for(j=0;j<width;j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int v[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *p[3]={v[0],v[2],v[1]}; //指標陣列p可以存放v陣列元素不同順序，或是存放其他三個小陣列
    print(p,3,3);
    return 0;
}
