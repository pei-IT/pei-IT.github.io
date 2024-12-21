#include<stdio.h>
int main(){
    int guess,number=87;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if(guess>number){
        printf("Too large!\n");
    } else if(guess<number){ //else後面只包含一個if-else述句時可省略
        printf("Too small!\n");
    } else{ //因為如果a不是>或<number,if(a==mumber){}就一定成立,所以可省略
        printf("Correct!\n");
    }
    return 0;
}
