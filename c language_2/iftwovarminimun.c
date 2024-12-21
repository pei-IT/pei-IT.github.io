#include<stdio.h>
int main(){
    int a,b,c,min;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    min=a; //預設min儲存a中最小的也就是a為打擂臺輸家
    if(b<min){
        min=b;
    } //min儲存a跟b中最小的也就是a或b中打輸的
    if(c<min){
        min=c;
    }
    printf("The minimun is %d.\n", min);
    return 0;

}
