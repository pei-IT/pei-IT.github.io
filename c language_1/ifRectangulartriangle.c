#include <stdio.h>
int main(){
    int edge1,edge2,edge3;
    printf("Please enter the length: ");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    if(edge1*edge1+edge2*edge2==edge3*edge3){ //^���O����B��l,c�Bc++�άO�����y�����بS����(��)��B��l
        printf("Rectangular Triangle\n");
    }
    return 0;
}
