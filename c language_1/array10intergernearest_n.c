#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,q,a[10];
    for(i=1;i<=10;i++){ //i�N���J���ǽs��
        scanf("%d",&a[i-1]);
    }
    while(1){
    printf("Q: ");
    scanf("%d",&q);
        if(q==0){
            break;
        }
        int nearest_n=a[0],nearest_d=abs(q-a[0]); //abs()�⵴��Ȩ��
        for(i=1;i<10;i++){ //�Nn[0]�w�]���̱��񪺤���,�}�C��qn[1]�}�l��
            int d=abs(q-a[i]); //���ܼ�d���N��if(����)���h��abs()�禡
            if((d<nearest_d||d==nearest_d&&a[i]<nearest_n)){ //��̷s����쥻���٭n��,�Ϊ̷̳s����쥻���@�˪�B��쥻�٭n�p
                nearest_d=d;
                nearest_n=a[i];
            }
        }
        printf("%d\n",nearest_n);
    }
    return 0;
}
