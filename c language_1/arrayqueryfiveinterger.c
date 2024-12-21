#include<stdio.h>
int main(){
    int a[5]={0};
    int i
    for(i=1;i<=5;i++){ //i代表輸入順序編號,(i=0;i<5;i++)寫法i代表陣列索引編號
    printf("%d : ",i);
    scanf("%d",&a[i-1]); //a[i]為陣列索引編號的寫法
    }
    while(1){
    printf("Q: ");
    scanf("%d",&i); //i重複使用代表輸入順序,之後把對應的a[]陣列元素印出來
        if(i==0){ //if敘述要在ln15 printf之前,因為a[0-1]會產生未定義行為
            break;
        }
    printf("%d\n",a[i-1]);
    }
    return 0;
}
