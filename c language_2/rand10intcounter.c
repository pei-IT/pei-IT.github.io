#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int i,n,counter[10]={0}; //�p�ƾ��s��10�Ӿ�ƥX�{������,�}�C�j�p��n���d��(�Ȱ�)����
    for(i=1;i<=10;i++){
        do{
            n=rand()%10+1;
        } while(counter[n-1]!=0); //�p�G�p�ƾ����Ƥ�����0�N�A��@���^��do�}�Y
        printf("%d ", n);
        counter[n-1]++; //n�q1�ƨ�10�����p�ƾ�0�ƨ�9,�ƨ�n�N��p�ƾ�[n-1]�[1
    }
    printf("\n");
    return 0;
}
