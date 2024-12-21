#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int i,j,isused,a[10]; //陣列存放10個整數用來查看是否重複
    for(i=1;i<=10;i++){ //i代表骰第幾次
        do{
            a[i-1]=rand()%10+1; //rand()產生隨機整數%10=0~9,(0~9)+1=1~10
            isused=0; //預設0代表整數尚未重複
            for(j=1;j<i;j++){ //j<i代表從1檢查到i-1次
                if(a[i-1]==a[j-1]){ //如果有重複將isused設為1並跳出for迴圈
                    isused=1;
                    break;
                }
            } //省略變數isused寫法,while(j!=i)代表有找到重複for迴圈提前終止,而j=i代表迴圈跑完
        } while(isused==1); //如果整數有重複就再骰一次回到do開頭
        printf("%d ", a[i-1]);
    }
    printf("\n");
    return 0;
}
