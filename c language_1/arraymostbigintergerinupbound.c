#include<stdio.h>
int main(){
    int i,q,a[10];
    for(i=1;i<=10;i++){ //i�N���J���ǽs��
        scanf("%d",&a[i-1]);
    }
    while(1){ //max_i=-1,�令�s����޸�,���޸��d��@�w��0��9����
    int max_i=-1; //�C���d�ߦs����޸�max_i�Ҷ���l�Ƭ�-1,�ҥH�n�bwhile�j�餺�ŧi
    printf("Q: ");
    scanf("%d",&q);
        if(q==0){
            break;
        }
            for(i=0;i<10;i++){ //max_i==-1�N��O�Ĥ@�ӧ��,�s����쥻���٭n�j�@�˴���
                if(a[i]<=q&&(max_i==-1||a[i]>a[max_i]){ //�Ϊ�(||)�u���D��,��e���ŦX����,�᭱���N���|��,�ҥH���|��a[-1]���w�q�欰����
                    max_i=i;
                }
            }
            if(max_i!=-1){ //max�w�]�ȥ������J��10�Ӿ���٭n�p,�P�ɤ]����۵�
               printf("%d\n",a[max_i]);
            }
    }
    return 0;
}
