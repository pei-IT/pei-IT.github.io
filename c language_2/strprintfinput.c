#include<stdio.h>
void str_read(char[], int);

int main(){
    char str[15];
    str_read(str, 14);
    printf("%s\n", str); //�H�r��榡�L�X�r���}�Cstr
    return 0;
}

void str_read(char str[], int n){
    int i; //Ū�J���r���s��b�r���}�C�����޽s��
    for(i=0;i<n;i++){ //�{���|�d�bscanf����ϥΪ̿�Jenter(\n)�N��r�g�Jstdin�ɮ�
        scanf("%c", &str[i]); //�g�Jstdin��scanf�~�}�lŪ�ɡA�N�Ĥ@�Ӧr���s��bstr[0]
        if(str[i]=='\n') //stdin�ɮ׳̫�@�Ӧr����\n�A�pŪ��\n�h���X�j��
            break;
    }
    str[i]='\0'; //�r�굲�������O\0�A�ҥH�N�r���}�C����\n�����s��\0
}
