#include<stdio.h>
#include<stdlib.h> //srand��ƨ禡�w
#include<time.h> //time��ƨ禡�w
int main(){ //time(time_t* timer)(���аѼ� �ѼƦW��),�P�@��������~�|���ͤ@�˼Ʀr
    srand(time(0)); //srand(unsigned int seed(�üƺ�))��l�ƶüƲ��;�,�üƺؼƦr�ۦP���ͪ��üƤ��ۦP
    int i;
    for(i=1;i<=5;i++){
        printf("%d\n",rand());
    }
    return 0;

}
