#include<stdio.h>
int main(){
    int n,m;
    printf("Please enter the number M: ");
    scanf("%d",&m);
    printf("Please enter the number N: ");
    scanf("%d",&n);
    int count=m;
    while(count<=n){
        printf("%d\n",count);
        count=count+1;
    }
    return 0;
}
