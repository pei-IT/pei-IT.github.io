#include<stdio.h>

int main(){
    int v[5]={1,2,3,4,5};
    int *n; //�ܼ�n�s���ưO�����}���A
                           //ln7�t�@�ؼg�kn!=v+5;
    for(n=v;n!=&v[5];n++){ //v�}�C�����૬&v[0]��ȵ�n�A��n������}�C����v[5]����}��n+1���Ჾ�@���&v[0+1]
        printf("%d\n", *n); //printf("%d\n", *n++);
    }
    return 0;
}
