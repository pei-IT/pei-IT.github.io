#include <stdio.h>
int main(){
    int edge1,edge2,edge3;
    printf("Please enter the length: ");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    if(edge1*edge1+edge2*edge2==edge3*edge3){ //^不是平方運算子,c、c++或是早期語言內建沒有平(次)方運算子
        printf("Rectangular Triangle\n");
    }
    return 0;
}
