#include<stdio.h>

void swap(int *,int *);
void sort(int *,int *);

int main(){
    int a=5,b=3;
    sort(&a,&b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

void sort(int *a,int *b){
    if(*a>*b){ //�ҥH&*�i�H���۩��
        swap(a,b); //&*a,&*b�A*a�N�������o���ӰO�����}�ܼ�a���ȡA�A&���}�S�ܦ^�s��a�O�����}�������ܼ�
    }
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
