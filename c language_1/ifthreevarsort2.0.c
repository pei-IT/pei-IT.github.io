#include<stdio.h>
int main(){
    int a=2,b=7,c=9,temp; //�T�ܼƪ��ƭȥ洫��7,9,2
    printf("Before: %d %d %d\n",a ,b,c);
    temp=2;
    a=b;
    b=c;
    c=temp;
    printf("After: %d %d %d\n",a ,b,c);
    return 0;
}
