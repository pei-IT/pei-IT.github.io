#include<stdio.h>
int main(){
    int a[5]={0};
    int i
    for(i=1;i<=5;i++){ //i�N���J���ǽs��,(i=0;i<5;i++)�g�ki�N��}�C���޽s��
    printf("%d : ",i);
    scanf("%d",&a[i-1]); //a[i]���}�C���޽s�����g�k
    }
    while(1){
    printf("Q: ");
    scanf("%d",&i); //i���ƨϥΥN���J����,����������a[]�}�C�����L�X��
        if(i==0){ //if�ԭz�n�bln15 printf���e,�]��a[0-1]�|���ͥ��w�q�欰
            break;
        }
    printf("%d\n",a[i-1]);
    }
    return 0;
}
