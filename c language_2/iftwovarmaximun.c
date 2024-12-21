#include<stdio.h>
int main(){
    int a,b,max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);
    max=a;
    if(max<b){ //if(a>=b){max=a;}
        max=b;
    } //if(a<b){max=b;}
    printf("The maximun is %d.\n", max);
    return 0;

}
