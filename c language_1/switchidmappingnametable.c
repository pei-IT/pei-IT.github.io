#include<stdio.h>
int main(){
    int id;
    printf("ID: ");
    scanf("%d",&id);
    switch(id){
        case 2:
        case 3:
        case 4:
            printf("John\n"); //���]case2,3,4�H�W�ҹ�����John,break�i�H�����Pcase�@�ΦP�@�q�{���X
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
