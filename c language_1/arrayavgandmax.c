#include<stdio.h>

int avg10(int a[10]);
int max10(int a[10]); //�N�p��P��J���},�Ψ�Ƽg�k�W�[�iŪ�ʻP�X�R��

int main(){
    int i,a[10];
    for(i=1;i<=10;i++){
        scanf("%d", &a[i-1]); //���޽s�������ǽs��i-1
    }
    printf("Max: %d\n", max10(a)); //�}�C�Ѽƶǰe�ΰ}�C�W��a�h��
    printf("Avg: %d\n", avg10(a));
    return 0;
}

int max10(int a[10]){ //�禡�ѼƤ]�i�H�ϥΰ}�C
    int i,max=a[0]; //max�w�]���Ĥ@�Ӫ���,�קK�̤j�ȥX�{���~
    for(i=1;i<10;i++){ //i�n�վ�q���޽s��1�}�l
        if(a[i]>max){
        max=a[i];
        }
    }
    return max;
}
int avg10(int a[10]){
    int i,avg,sum=a[0];
    for(i=1;i<10;i++){
        sum+=a[i];
    }
    avg=sum/10;
    return avg;
}
