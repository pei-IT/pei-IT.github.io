#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int counter[11]={0}; //�I��2��12�`�@��12-2+1=11���I��
    int i;
    for(i=1;i<=10000;i++){ //i���󦸼�
        int dice1=rand()%6+1;
        int dice2=rand()%6+1;
        int sum=dice1+dice2;
        counter[sum-2]++; //sum�����p�ƾ����ެ�sum-2=counter[index]
        }
    for(i=2;i<=12;i++){ //i�����I��2��12�I
        printf("%d: %d\n" ,i ,counter[i-2]); //i=sum,�ҥHindex=i-2
    }
    return 0;
}
