#include<stdio.h>
int main(){
    int guess;
    int number=87;
    int count=0;
    while(count==0||guess!=number){ //count=0,�ҥHwhile�j��ܤְ���@��,�ĤG��count=1������,����Ϊ̩ҥH�t�@�䦨�ߤ]�i�Jwhile�j����檽��q��
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count=count+1;
        if(guess>number){
            printf("Too large!\n");
        } else if(guess<number){
            printf("Too small!\n");
        }
    }
    printf("Correct!\n");
    return 0;
}
