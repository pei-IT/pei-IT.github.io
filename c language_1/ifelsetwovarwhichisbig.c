#include<stdio.h>
int main(){
    int a,b;
    printf("Please enter a or b: ");
    scanf("%d%d", &a,&b);
    if(a>b){
        printf("a>b\n");
    } else if(a<b){ //�]��else{}���u�]�t�@��if�z�y,�ҥH�j�A��{}�i�ٲ�
        printf("a<b\n");
    } else{ //�]���e�����if�P�_��a�@�w����b,�ҥHif(a==b)�i�ٲ�
        printf("a=b\n");
    }
    return 0;
}
