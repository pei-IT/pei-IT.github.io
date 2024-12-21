#include<stdio.h>

int main(){
    int i,n,counter[10]={0}; //counter皚璸计竟0~9瞷Ω计
    for(i=1;i<=10;i++){
    scanf("%d", &n);
    counter[n]++; //
    }
    int ans=0; //箇砞0腹瞷Ω计程
    for(n=1;n<10;n++){
        if(counter[n]>=counter[ans]){ //狦穝Ω计ゑセヘ玡Ω计临璶┪单,碞р氮传奔
            ans=n;
        }
    }
    printf("Ans: %d",ans); //瞷Ω计程ま絪腹,瞷Ω计程计ぃ琌Ω计セō
    return 0;
}
