#include <stdio.h>
int main(){
    int edge1,edge2,edge3;
    printf("Please enter the length: ");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    if(edge1==edge2&&edge2==edge3){
        printf("Regular Triangle\n");
    }
    if(edge1==edge2||edge2==edge3||edge1==edge3){ //���]���T���Τ]�O�@�ص��y�T����
        printf("Isosceles Triangle\n");
        }
    if(edge1*edge1+edge2*edge2==edge3*edge3||edge1*edge1+edge3*edge3==edge2*edge2
    ||edge2*edge2+edge3*edge3==edge1*edge1){
        printf("Rectangular Triangle\n");
    }
    return 0;
}
