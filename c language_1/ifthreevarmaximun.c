#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Please enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    max=a; //預設max儲存a中最大的也就是a為打擂臺贏家
    if(max<b){
        max=b;
    } //max儲存a跟b中最大的也就是a或b中打贏的
    if(max<c){
        max=c;
    } //max儲存a跟b跟c中最大的也就是a或b或c中打贏的
    printf("The maximun is %d.\n", max);
    return 0;

}
