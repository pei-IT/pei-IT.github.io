#include<stdio.h>
int main(){
    int i,j,n,a[10]={0}; //a�}�C���p�ƾ���l�Ȭ�0
    for(i=1;i<=10;i++){
        scanf("%d", &n);
        a[(n-1)/10]++; //�C���s��@��n�N��������p�ƾ�+1,�ϹL�ӷQ���ǼƦr*10,/10��ӼƬO1,�P��϶��t�Ȭ�1
    }
    for(i=1;i<=10;i++){ //i�N���϶�,�`�@10�Ӱ϶�
        printf("%3d: ",i*10); //��ܰ϶��s��,�p�ƾ��s��*10;printf�榡��:%3d�N����Ʒ|��3�Ӧr��,����3��e���ɪŮ�
        for(j=1;j<=a[i-1];j++){ //�϶�-1=a[�p�ƾ��s��]=�p�ƾ������Ӽ�
            printf("*");
        }
        printf("\n");
    }
    return 0;
}