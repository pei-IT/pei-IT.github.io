#include<stdio.h>
int main(){
    int N;
    printf("N= ");
    scanf("%d",&N);

    int number;
    int isprime=1; //類似旗標的概念，預設將質數設為True，0代表false、1代表True
    for(number=2;number<N&&isprime==1;++number){ //質數正因數不包含1，找不到被範圍從2到自己本身-1中的整數整除為質數
        if(N%number==0){
            isprime=0; //找到被其他正因數整除設為false，不是質數
        }
    }
        if(isprime==1){ //可省略為(isprime)，將isprime視為布林代數的概念
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    return 0;
}
