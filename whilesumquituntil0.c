#include<stdio.h>
int main(){
    int number;
    int sum=0;
    printf("Please enter the numbers (quit=0): \n");
    scanf("%d",&number); //因為變數number在ln7 while條件判斷時尚未給值
    while(number!=0){ //所以複製一次scanf述句讀入使用者輸入的值給number
    sum=sum+number;
    scanf("%d",&number);
    }
    printf("The sum is: %d.\n",sum);
    return 0;
}
