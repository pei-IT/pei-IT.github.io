#include<stdio.h>
int main(){
    int guess,number=87,count=0;
    printf("Please enter your guess: ");
    scanf("%d", &guess); //在執行while迴圈之前讀入使用者輸入的值給guess
    count=1; //count=0+1,因為至少會猜一次讓guess有值再執行while迴圈
    while(guess!=number){
        if(guess>number){
            printf("Too large!\n");
        } else {
            printf("Too small!\n");
        }
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count=count+1; //使用者每猜(輸入)一次count就加一
        }
    printf("Correct! (%d)\n",count);
    return 0;
}
