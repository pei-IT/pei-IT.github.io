#include<stdio.h>
int main(){
    int count=0;
    int number;
    for(number=1;number<=1000&&count<3;++number){ //numbmer�p�ƾ��N��ƨ�ĴX���Acount<3������������
        if(number%3==2&&number%5==3&&number%7==2){
            ++count; //count�p�ƾ��N��ƨ�ĴX��
                if(count<=3){ //�ŦX���󪺭ȤT�����~�L�X
                    printf("%d ",number);
                }
            }
    }
    printf("\n");
    return 0;
}
