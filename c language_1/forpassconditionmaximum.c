#include<stdio.h>
int main(){
    int max;
    printf("MAX = ");
    scanf("%d",&max);

    int number;
    int answer=0;
        for(number=max;number>=1&&answer==0;--number){ //��answer==0�N��qmax�ƤU���٨S���
            if(number%3==2&&number%5==3&&number%7==2){ //�p�G����S���[answer==0�A�qMAX�ƤU��answer�ܦs��̤p����
                answer=number; //answer�ΨӦs��̷s��쪺��
            }
        }
        if(answer!=0){ //�ŦX����N�����̤j�ȴN�L�Xnumber���ȡA�p�Ganswer=0�N��S�����N���L�X
            printf("%d\n",answer); //���H�I�L�̤p�Ȭ�23�A�ҥH�p�G�ϥΪ̿�JMAX=5�A�|�䤣��number�|�@��-1�����w�q�欰�{��
        }
    return 0;
}
