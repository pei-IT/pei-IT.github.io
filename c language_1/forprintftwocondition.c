#include<stdio.h>
int main(){
    int number;
    for(number=2;number<=10;number+=2){ //�j�����5���A�L�o���å�2,4,6,8,10
        if(number%3!=0){ //���󦨥ߤ~�L�X�A�L�X4���Aif��t���}�������L�o
            printf("%d\n",number);
        }
    }
    return 0;
}
