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
    int *p[3]={v[0],v[2],v[1]}; //���а}�Cp�i�H�s��v�}�C�������P���ǡA�άO�s���L�T�Ӥp�}�C
    print(p,3,3);
    return 0;
}
