#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int v[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,k=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){ //r�|�M�w�ѤU�������@�ӯ��޸��i��洫
            int r=rand()%(9-k)+k; //�qv[0][0]�}�l�q�ѤU��9�椤�]�t�ۤv,��@��洫,�C�����q�ѤU����@��洫
            int m=r/3; //��r�ϱ��a����
            int n=r%3; //��r�ϱ����
            int temp=v[i][j];
            v[i][j]=v[m][n];
            v[m][n]=temp;
            k++; //���ᨫ�@��
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", v[i][j]); //�L�X���ǲĤ@�C����123����B�ĤG�C456�B�ĤT�C789
        }
        printf("\n");
    }
    return 0;
}
