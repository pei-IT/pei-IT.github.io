#include<stdio.h>
void str_read(char[], int);

int main(){
    char str[15];
    str_read(str, 14); //�ǤJ��ưѼ�14
    printf("%s\n", str); //�H�r��榡�L�X�r���}�Cstr
    return 0;
}

void str_read(char str[], int n){
    int i; //Ū�J���r���s��b�r���}�C�����޽s��
    for(i=0;i<n;i++){ //i�q0�]��n-1=13�A�����J14�Ӧr����j�鵲��
        scanf("%c", &str[i]); //�g�Jstdin��scanf�~�}�lŪ�ɡA�N�Ĥ@�Ӧr���s��bstr[0]
        if(str[i]=='\n') //��i=14�Y��15�Ӥ�����\n���X�j��
            break;
    }
    str[i]='\0'; //�r�굲�������O\0�A�ҥH�Nstr[14]�����15�Ӧr��\n�����s��\0
}
