#include<stdio.h>
int main(){
    int a,b,c,min;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    min=a; //�w�]min�x�sa���̤p���]�N�Oa�����ݻO��a
    if(b<min){
        min=b;
    } //min�x�sa��b���̤p���]�N�Oa��b�����骺
    if(c<min){
        min=c;
    }
    printf("The minimun is %d.\n", min);
    return 0;

}
