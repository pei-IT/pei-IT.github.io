#include<stdio.h>
int main(){
    int max;
    printf("MAX = ");
    scanf("%d",&max);

    int number;
    int answer=0;
        for(number=max;number>=1&&answer==0;--number){ //讽answer==0眖max计ㄓ临⊿т
            if(number%3==2&&number%5==3&&number%7==2){ //狦兵ン⊿Τanswer==0眖MAX计ㄓanswer跑程
                answer=number; //answerノㄓ程穝т
            }
        }
        if(answer!=0){ //才兵ンΤт程碞number狦answer=0⊿Τт碞ぃ
            printf("%d\n",answer); //龙獺翴程23┮狦ㄏノ块MAX=5穦тぃnumber穦-1ゼ﹚竡︽祘Α
        }
    return 0;
}
