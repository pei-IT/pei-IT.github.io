#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>=b&&a>=c){ //當a=b=c或a=b>c,if條件成立,後面兩個用else串接起來的else if雖然條件也成立但都不會做
        max=a;
    } else if(b>a&&b>=c){ //當b=c>a
        max=b;
    } else{ //當前面兩的if條件都不成立,代表第三個if條件一定成立,所以if(c>a&&c>b)可省略
        max=c;
    }
    printf("The maximun is %d.\n", max);
    return 0;

}
