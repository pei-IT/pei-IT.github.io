#include<stdio.h>

int main(){
    int i,j,a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ //�]�i�H�g�j����w�C��a[i][j]���ƭ�
            a[i][j]=i*3+j+1; //���޸����W�@�L�G����,�ί��޸������Ȭ��h��,�q�`��P�@�Ӿ�C���h�֤�������
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", a[i][j]); //�L�X���ǲĤ@�C����123����B�ĤG�C456�B�ĤT�C789
        }
        printf("\n");
    }
    return 0;
}
