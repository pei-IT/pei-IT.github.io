#include<stdio.h>
int main(){
    int i=3;
    printf("%d\n",i); //���W�ݧ��,�L�Xi=3
    if(i==3){
        i=i+1; //i=3+1=4
        int i=6;
        printf("%d\n",i); //���W�ݧ��,i=6or4,�L�Xi=6
        i=i+1; //���W�ݧ��i=6+1=7
    }
    if(i==3){
        printf("%d\n",i); //���W��i=7or4,�]��if{}�Qmina{}�]��,�ҥHi=4������L�X
    }
    return 0;
}
