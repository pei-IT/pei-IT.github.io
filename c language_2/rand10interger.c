#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int i,j,isused,a[10]; //�}�C�s��10�Ӿ�ƥΨӬd�ݬO�_����
    for(i=1;i<=10;i++){ //i�N���ĴX��
        do{
            a[i-1]=rand()%10+1; //rand()�����H�����%10=0~9,(0~9)+1=1~10
            isused=0; //�w�]0�N���Ʃ|������
            for(j=1;j<i;j++){ //j<i�N��q1�ˬd��i-1��
                if(a[i-1]==a[j-1]){ //�p�G�����ƱNisused�]��1�ø��Xfor�j��
                    isused=1;
                    break;
                }
            } //�ٲ��ܼ�isused�g�k,while(j!=i)�N����쭫��for�j�鴣�e�פ�,��j=i�N��j��]��
        } while(isused==1); //�p�G��Ʀ����ƴN�A��@���^��do�}�Y
        printf("%d ", a[i-1]);
    }
    printf("\n");
    return 0;
}
