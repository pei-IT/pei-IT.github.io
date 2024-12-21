#include<stdio.h>
int max3(int, int, int);

int main(){
        int a,b,c,max;
        printf("please enter three interger: ");
        scanf("%d%d%d",&a,&b,&c);
        printf("the maxinum: %d.\n",max3(a,b,c));
        return 0;
}
int max3(int x,int y,int z){
    int max=x;
        if(y>x){
            max=y;
        }
        if(z>y){
            max=z;
        }
    return max;
}
