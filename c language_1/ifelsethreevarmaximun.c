#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>=b&&a>=c){ //��a=b=c��a=b>c,if���󦨥�,�᭱��ӥ�else�걵�_�Ӫ�else if���M����]���ߦ������|��
        max=a;
    } else if(b>a&&b>=c){ //��b=c>a
        max=b;
    } else{ //��e���⪺if���󳣤�����,�N��ĤT��if����@�w����,�ҥHif(c>a&&c>b)�i�ٲ�
        max=c;
    }
    printf("The maximun is %d.\n", max);
    return 0;

}
