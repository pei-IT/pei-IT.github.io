#include<stdio.h>
void str_read(char[], int);

int main(){
    char str[15];
    str_read(str, 14);
    printf("%s\n", str); //以字串格式印出字元陣列str
    return 0;
}

void str_read(char str[], int n){
    int i; //讀入的字元存放在字元陣列的索引編號
    for(i=0;i<n;i++){ //程式會卡在scanf直到使用者輸入enter(\n)將文字寫入stdin檔案
        scanf("%c", &str[i]); //寫入stdin後scanf才開始讀檔，將第一個字元存放在str[0]
        if(str[i]=='\n') //stdin檔案最後一個字元為\n，如讀到\n則跳出迴圈
            break;
    }
    str[i]='\0'; //字串結尾必須是\0，所以將字元陣列結尾\n換成存放\0
}
