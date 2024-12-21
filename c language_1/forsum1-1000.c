#include<stdio.h>
int main(){
    int number;
    int sum=1;
    int N;
    printf("N = ");
    scanf("%d",&N);
    for(number=2;number<=N;number++){
        sum=sum+number;
    }
    printf("%d\n",sum);
    return 0;
}
