#include <stdio.h>
int main(){
    int edge1,edge2,edge3;
    printf("Please enter the length: ");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    if(edge1==edge2&&edge2==edge3){ //因為C語言同時只會做兩個運算元一個運算子的運算所以不能三個運算元==
        printf("Regular Triangle\n");

    }
    return 0;
}
