#include <stdio.h>
int main(){
    int a,b;
    char operator;
    float answer;
    printf("Please enter two integer: ");
    scanf("%d%c%d",&a,&operator,&b);
    if(operator=='+'){ //在運算式中+為運算子,但用單引號'+'則為字元,if條件(使用者輸入字元的ASCII編碼數字與'+'是否相同)
        answer=a+b;
    } else if(operator=='-'){
        answer=a-b;
    } else if(operator=='*'){
        answer=a*b;
    } else{ //假設使用者只能輸入+-*/四個運算,因為前面三個判斷都錯,第四個一定是除法,所以if(operator=='/')可省略
        answer=(float)a/b; //強制轉型變數a為浮點數,變數b隱性轉型為浮點數,浮點數除法結果為浮點數存入answer
    }
    printf("ANS: %f\n", answer);
    return 0;
}
