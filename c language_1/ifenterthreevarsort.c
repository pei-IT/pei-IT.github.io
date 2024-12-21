#include <stdio.h>
int main(){
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    printf("Before: %d %d %d\n",a,b,c);
    if(a<c&&c<b){
        temp=b;b=c,c=temp;
    }
    if(b<a&&a<c){
        temp=a;a=b;b=temp;
    }
    if(b<c&&c<a){
        temp=a;a=b;b=c;c=temp;
    }
    if(c<a&&a<b){
        temp=a;a=c;c=b;b=temp;
    }
    if(c<b&&b<a){
        temp=a;a=c;c=temp;
    }
    printf("After: %d %d %d\n",a,b,c);
    return 0;


}
