#include<stdio.h>

int main(){
    int i,j,bubble[5]; //�w�j�Ƨǵ{���X�����[
    for(i=0;i<5;i++){
    scanf("%d", &bubble[i]);
    }

    for(i=0;i<4;i++){ //5�Ӿ���`�@��4���w�j�Ƨ�,i�q0~3
        for(j=0;j<4-i;j++){ //���[�g�k:j<4;,5�Ӿ�ƨC�����洫4��,�C�i��@���N�֥洫�@��
            if(bubble[j]>bubble[j+1]){ //�p�G�j�����Ȥ�ثe���Ȥj�N�洫
                int temp=bubble[j]; //���ܼ�swap
                bubble[j]=bubble[j+1];
                bubble[j+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
    printf("%d ", bubble[i]); //�L�X�q�p��j�ƧǪ����Ӿ��
    }
    return 0;
}
