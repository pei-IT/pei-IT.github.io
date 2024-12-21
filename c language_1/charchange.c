#include <stdio.h>
int main(){
    char input,output;
    printf("請輸入一個字元:");
    scanf("%c", &input);
    output=input+('a'-'A');
    printf("%c\n", output);
    return 0;

}
