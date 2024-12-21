#include <stdio.h>
int main(){
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    printf("Before: %d %d %d\n",a,b,c);
    if(b<a){
        temp=b;b=a,a=temp;
    }
    if(c<a){
        temp=c;c=a;a=temp;
    }
    if(c<b){
        temp=c;c=b;b=temp;
    }
    printf("After: %d %d %d\n",a,b,c);
    return 0;


}
