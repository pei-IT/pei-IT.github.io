#include<stdio.h>
int main(){
    int guess,number=87,count=0;
    printf("Please enter your guess: ");
    scanf("%d", &guess); //�b����while�j�餧�eŪ�J�ϥΪ̿�J���ȵ�guess
    count=1; //count=0+1,�]���ܤַ|�q�@����guess���ȦA����while�j��
    while(guess!=number){
        if(guess>number){
            printf("Too large!\n");
        } else {
            printf("Too small!\n");
        }
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count=count+1; //�ϥΪ̨C�q(��J)�@��count�N�[�@
        }
    printf("Correct! (%d)\n",count);
    return 0;
}
