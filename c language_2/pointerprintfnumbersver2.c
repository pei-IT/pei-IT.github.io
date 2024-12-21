#include<stdio.h>
#include<stdlib.h>

int main(){
    int* numbers; //宣告指標變數改指向不同的陣列
    int length=0;
    while(1){
        int input;
        scanf("%d", &input);
        if(input==0){
            break;
        }
        int* larger=malloc(sizeof(int)*(length+1)); //每執行一次while迴圈產生更大的larger陣列
        int i;
        for(i=0;i<length;i++){
            larger[i]=numbers[i];
        }
        numbers=larger; //將更大的larger陣列第一個元素的位址存放至指標變數number
        numbers[length]=input; //指標變數numbers[]代表從指標存放的位址開始走length格，larger[0]=1
        length++; //表示numbers指向的larger陣列有lentgh個大
    }

    printf("Numbers: ");
    for(int i=0;i<length;i++){
        printf("%d ", numbers[i]); //whlle迴圈結束指標變數存放位址是最後最大的larger陣列元素
    }
    printf("\n");
    return 0;
}
