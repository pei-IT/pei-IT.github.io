#include<stdio.h>
int main(){
    int N;
    printf("N= ");
    scanf("%d",&N);

    int number;
    int isprime=1; //�����X�Ъ������A�w�]�N��Ƴ]��True�A0�N��false�B1�N��True
    for(number=2;number<N&&isprime==1;++number){ //��ƥ��]�Ƥ��]�t1�A�䤣��Q�d��q2��ۤv����-1������ƾ㰣�����
        if(N%number==0){
            isprime=0; //���Q��L���]�ƾ㰣�]��false�A���O���
        }
    }
        if(isprime==1){ //�i�ٲ���(isprime)�A�Nisprime�������L�N�ƪ�����
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    return 0;
}
