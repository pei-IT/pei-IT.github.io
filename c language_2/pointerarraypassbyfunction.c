#include<stdio.h>

void print(int (*q)[3]){ //(int *n)
    int i;
    for(i=0;i<3;i++){
        printf("%d ", (*q)[i]); //printf("%d", n[i]);
    }
    printf("\n");
}

int main(){
    int v[3]={1,2,3};
    print(&v); //print(v)�]�i�H�ǤJv�}�C�Av�}�C�|�����૬�����Ы��Vv[0]����}
    return 0;
}
