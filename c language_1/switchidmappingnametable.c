#include<stdio.h>
int main(){
    int id;
    printf("ID: ");
    scanf("%d",&id);
    switch(id){
        case 2:
        case 3:
        case 4:
            printf("John\n"); //假設case2,3,4人名皆對應到John,break可以讓不同case共用同一段程式碼
            break;
        case 13:
            printf("Mary\n");
            break;
        case 16:
            printf("Amy\n");
            break;
        default:
            printf("Not found\n");
    }
    return 0;
}
