#include<stdio.h>
int main(){
    int a,b,c,med;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c); //取址如果重複compiler會過,但輸入3個整數中會少掉其中一個整數做判斷,中位數可能會錯誤
    med=a;
    if(a<=b&&b<=c||c<=b&&b<=a){
        med=b;
    }
    if(a<=c&&c<=b||b<=c&&c<=a){
        med=c;
    }
    printf("The median is %d.\n", med);
    return 0;
}
