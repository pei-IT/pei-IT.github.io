#include<stdio.h>
int main(){
    int a,b,c,d,max;
    printf("Please enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max=a; //�w�]max�x�sa���̤j���]�N�Oa�����ݻOĹ�a
    if(max<b){
        max=b;
    } //max�x�sa��b���̤j���]�N�Oa��b����Ĺ��
    if(max<c){
        max=c;
    } //max�x�sa��b��c���̤j���]�N�Oa��b��c����Ĺ��
    if(max<d){
        max=d;
    } //max�x�sa,b,c,d���̤j���]�N�Oa��b��c��d����Ĺ��
    printf("The maximun is %d.\n", max);
    return 0;

}
