#include<stdio.h>
int main(){
    int guess,number=87;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if(guess>number){
        printf("Too large!\n");
    } else if(guess<number){ //else�᭱�u�]�t�@��if-else�z�y�ɥi�ٲ�
        printf("Too small!\n");
    } else{ //�]���p�Ga���O>��<number,if(a==mumber){}�N�@�w����,�ҥH�i�ٲ�
        printf("Correct!\n");
    }
    return 0;
}
