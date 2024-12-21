#include<stdio.h>
int main(){
    int count=0;
    int number;
    for(number=1;number<=1000&&count<3;++number){ //numbmer計數器代表數到第幾號，count<3提早結束機制
        if(number%3==2&&number%5==3&&number%7==2){
            ++count; //count計數器代表數到第幾個
                if(count<=3){ //符合條件的值三次內才印出
                    printf("%d ",number);
                }
            }
    }
    printf("\n");
    return 0;
}
