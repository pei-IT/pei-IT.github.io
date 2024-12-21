#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int counter[11]={0}; //翴计212羆Τ12-2+1=11翴计
    int i;
    for(i=1;i<=10000;i++){ //i单Ω计
        int dice1=rand()%6+1;
        int dice2=rand()%6+1;
        int sum=dice1+dice2;
        counter[sum-2]++; //sum癸莱璸计竟まsum-2=counter[index]
        }
    for(i=2;i<=12;i++){ //i单翴计212翴
        printf("%d: %d\n" ,i ,counter[i-2]); //i=sum,┮index=i-2
    }
    return 0;
}
