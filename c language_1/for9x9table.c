#include<stdio.h>
int main(){
    int x,y,answer;
    for(x=2;x<=9;x++){ //�~�h�q2�]��9�A�����h�����~�|���~�h
        for(y=1;y<=9;y++){ //���h�q1�]��9�A���h�����~�|���~�h
            answer=x*y;
            printf("%d * %d = %d\n",x,y,answer);
        }
    }
    return 0;
}
