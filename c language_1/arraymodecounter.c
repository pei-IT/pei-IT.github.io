#include<stdio.h>

int main(){
    int i,n,counter[10]={0}; //counter�}�C�p�ƾ��s��0~9�X�{������
    for(i=1;i<=10;i++){
    scanf("%d", &n);
    counter[n]++; //
    }
    int ans=0; //�w�]0���X�{�����Ƴ̦h
    for(n=1;n<10;n++){
        if(counter[n]>=counter[ans]){ //�p�G�s�����Ƥ�쥻�ثe�����٭n�j�ά۵�,�N�⵪�״���
            ans=n;
        }
    }
    printf("Ans: %d",ans); //�L�X�X�{���Ƴ̤j�����޽s��,�L�X�X�{���Ƴ̦h���Ʀr���O���ƥ���
    return 0;
}
