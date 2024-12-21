#include<stdio.h>
int main(){
    int x,y,answer;
    for(x=2;x<=9;x++){ //外層從2跑到9，等內層做完才會做外層
        for(y=1;y<=9;y++){ //內層從1跑到9，內層做完才會做外層
            answer=x*y;
            printf("%d * %d = %d\n",x,y,answer);
        }
    }
    return 0;
}
