#include<stdio.h>
int main(){
    int number;
    printf("N = ");
    scanf("%d",&number);
    int count;
    for(count=1;count<=number;count++){ //�C�X�i�઺�Կ��
        if(number%count==0){ //if����L�o�ŦX���󪺦X���
            printf("%d ",count);
        }
    }
    printf("\n");
    return 0;
}
