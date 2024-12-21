#include<stdio.h>
#include<stdlib.h>

int main(){
    int numbers[10]; //假設使用者輸入10個整數以內
    int length;
    for(length=0;length<10;length++){ //迴圈執行0到9共10次
        int input;
        scanf("%d", &input);
        if(input==0){
            break; //敘述沒有對齊會造成編譯後指令無法執行;
        }
        numbers[length]=input; //將使用者輸入的整數依序存入numbers陣列
    }

    printf("Numbers: ");
    for(int i=0;i<length;i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
