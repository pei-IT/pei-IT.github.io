#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    max=a; //�w�]max�x�sa���̤j���]�N�Oa�����ݻOĹ�a
    if(max<b){
        max=b;
    } //max�x�sa��b���̤j���]�N�Oa��b����Ĺ��
    if(max<c){
        max=c;
    } //max�x�sa��b��c���̤j���]�N�Oa��b��c����Ĺ��
    printf("The maximun is %d.\n", max);
    return 0;

}
