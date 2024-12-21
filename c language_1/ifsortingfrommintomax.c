#include<stdio.h>
int main(){
    int a,b,temp;
    scanf("%d%d",&a,&b);
    printf("Before: %d %d\n",a ,b);
    if(a>b){
    temp=a;
    a=b;
    b=temp;
    }
    printf("After: %d %d\n",a ,b);
    return 0;
}
