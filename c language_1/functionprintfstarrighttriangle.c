#include<stdio.h>
void printf_star(int i);
void printf_triangle(int n);

int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);
    printf_triangle(n); //�ҲդơA�L�׼ҲդƷ|�y����H��
    return 0;
}

void printf_triangle(int n){ //void�N��禡�S���^�ǭȡA�D�n�ݭn�禡���Ƨ@��:�L�X����
    int i;
        for(i=1;i<=n;i++){
            printf_star(i); //�ҲդơA�W�[�{���iŪ��
            printf("\n"); //�禡�S���^�ǭ� return;�i�ٲ�
        }
}
void printf_star(i){
    int j;
        for(j=1;j<=i;j++){
            printf("*");
        }
}
