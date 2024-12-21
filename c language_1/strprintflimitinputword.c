#include<stdio.h>
void str_read(char[], int);

int main(){
    char str[15];
    str_read(str, 14); //傳入整數參數14
    printf("%s\n", str); //以字串格式印出字元陣列str
    return 0;
}

void str_read(char str[], int n){
    int i; //讀入的字元存放在字元陣列的索引編號
    for(i=0;i<n;i++){ //i從0跑到n-1=13，限制輸入14個字元後迴圈結束
        scanf("%c", &str[i]); //寫入stdin後scanf才開始讀檔，將第一個字元存放在str[0]
        if(str[i]=='\n') //當i=14即第15個元素為\n跳出迴圈
            break;
    }
    str[i]='\0'; //字串結尾必須是\0，所以將str[14]等於第15個字元\n換成存放\0
}
