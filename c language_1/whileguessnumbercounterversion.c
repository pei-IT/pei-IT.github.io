#include<stdio.h>
int main(){
    int guess;
    int number=87;
    int count=0;
    while(count==0||guess!=number){ //count=0,所以while迴圈至少執行一次,第二次count=1不成立,條件或者所以另一邊成立也進入while迴圈執行直到猜對
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
