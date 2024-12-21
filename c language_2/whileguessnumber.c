#include<stdio.h>
int main(){
    int guess,number=87;
    printf("Please enter your guess: "); //複製ln12、ln13
    scanf("%d", &guess); //在執行while迴圈之前讀入使用者輸入的值給guess
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
