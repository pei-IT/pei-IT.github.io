#include<stdio.h>
    int main(){
    int i,j;
    for(i=1;i<=30/2;i++){ //�]��i+j=30�A�ҥHi��j���|�W�L15�A�i�H�Y�p�Կ�̷j�M�d��
        for(j=30/2;j<=30;j++){
            if(i+j==30&&i*j==221){ //�άO�W�[i<j����A�u�L�X�@�ռƦr
                printf("%d, %d\n",i,j);
            }
        }
    }
    return 0;
    }
