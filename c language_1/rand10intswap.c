#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int i,n[10];
    for(i=1;i<=10;i++){
        n[i-1]=i; //�}�C�s��1��10�ƧǪ��ǦC
    }
    for(i=1;i<=10;i++){
        int j=rand()%(11-i)+i; //�Υ洫�@�ϧO,�ιL�����e������,�����N��ιL,�S�ιL���ᴫ,i����_�I�Ĥ@�ӼƦr
        int temp=n[i-1];
        n[i-1]=n[j-1];
        n[j=1]=temp;
        printf("%d ", n[i-1]);
    }
    printf("\n");
    return 0;
}
