#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int guess;
    int number=rand()%10;
    printf("Please enter your guess: "); //�ƻsln12�Bln13
    scanf("%d", &guess); //�b����while�j�餧�eŪ�J�ϥΪ̿�J���ȵ�guess

    while(guess!=number){
        if(guess>number){
            printf("Too large!\n");
        } else {
            printf("Too small!\n");
        }
        printf("Please enter your guess: ");
        scanf("%d", &guess);
    }
    printf("Correct!\n");
    return 0;
}
