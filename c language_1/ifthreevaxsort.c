#include<stdio.h>
int main(){
    int a=2,b=7,c=9,temp; //�T�ܼƪ��ƭȥ洫��9,2,7
    printf("Before: %d %d %d\n",a ,b,c);
    temp=c; //temp=9
    c=a; //c=2
    a=temp; //a=9
    temp=c; //temp=2
    c=b; //c=7
    b=temp; //b=2
    printf("After: %d %d %d\n",a ,b,c);
    return 0;
}
