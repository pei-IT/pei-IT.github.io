#include<stdio.h>
int main(){
    int number;
    printf("N = ");
    scanf("%d",&number);
    int count;
    for(count=1;count<=number;count++){ //列出可能的候選者
        if(number%count==0){ //if條件過濾符合條件的合格者
            printf("%d ",count);
        }
    }
    printf("\n");
    return 0;
}
