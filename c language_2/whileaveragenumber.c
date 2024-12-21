#include<stdio.h>
int main(){
    int number,sum=0,count=0;
    float average;
    printf("Please enter the numbers: (0: quit)\n");
    scanf("%d",&number); //至少會讀入變數number一次
    while(number!=0){
        sum=sum+number;
        count=count+1; //count就是ln8 sum=sum+number做了幾次
        scanf("%d",&number);
    }
    if(count!=0){ //if條件分母count不為0時,印出平均數,count為0時,印出N/A,因為第一次輸入0不執行while迴圈造成分母count為0
        average=(float)sum/count; //強制轉型變數sun為浮點數,sun/count從整數除改為浮點數除
        printf("The average is %f\n",average);
    } else{
        printf("The average is N/A\n");
    }
    return 0;
}
