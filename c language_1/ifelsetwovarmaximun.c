#include<stdio.h>
int main(){
    int a,b,max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);
    if(a>b){
        max=a;
    } else{
        max=b;
    }
    printf("The maximun is %d.\n", max);
    return 0;

}
