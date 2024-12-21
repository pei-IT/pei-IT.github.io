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
    print(&v); //print(v)也可以傳入v陣列，v陣列會隱性轉型為指標指向v[0]的位址
    return 0;
}
