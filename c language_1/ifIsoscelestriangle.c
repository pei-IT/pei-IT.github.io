#include <stdio.h>
int main(){
    int edge1,edge2,edge3;
    printf("Please enter the length: ");
    scanf("%d%d%d", &edge1, &edge2, &edge3); //�p�G�Ψ��if�ԭz�|�L�⦸printf�����e�A�δ�֦L�����ƨӫ��
    if(edge1==edge2||edge2==edge3||edge1==edge3){ //���]���T���Τ]�O�@�ص��y�T����
        printf("Isosceles Triangle\n");
    }
    return 0;
}
