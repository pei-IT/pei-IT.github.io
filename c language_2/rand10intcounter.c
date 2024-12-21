#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int i,n,counter[10]={0}; //璸计竟10俱计瞷Ω计,皚蛤n絛瞅(办)Τ闽
    for(i=1;i<=10;i++){
        do{
            n=rand()%10+1;
        } while(counter[n-1]!=0); //狦璸计竟Ω计ぃ单0碞浑Ωdo秨繷
        printf("%d ", n);
        counter[n-1]++; //n眖1计10癸莱璸计竟0计9,计n碞р璸计竟[n-1]1
    }
    printf("\n");
    return 0;
}
