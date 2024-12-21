#include<stdio.h>
int main(){
    int max;
    int min;
    printf("MAX = ");
    scanf("%d",&max);
    printf("MIN = ");
    scanf("%d",&min);

    int number;
    for(number=max;number>=min;number--){
        if(number%3==2&&number%5==3&&number%7==2){
            printf("%d ",number);
        }
    }
    printf("\n");
    return 0;
}
