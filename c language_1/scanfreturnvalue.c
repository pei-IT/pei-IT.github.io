#include<stdio.h>

int main(){
    int num;
    while(scanf("%d", &num)!=1){ //scanf()�禡�^�ǭ�1=true�B�D1=false
        printf("Error: invalid input\n"); //�p�G��Jabc�g�Jstdin�ɮסA�]��abc�g�J��@���s�b�Ĥ@��S���QŪ�J�A�|�ܦ��L�a�j��L�X���~�T��
    }
    printf("%d\n", num);
    return 0;
}
