#include <stdio.h>
int main(){
    int edge1,edge2,edge3;
    printf("Please enter the length: ");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    if(edge1==edge2&&edge2==edge3){
        printf("Regular Triangle\n");
    }
    if(edge1==edge2||edge2==edge3||edge1==edge3){ //假設正三角形也是一種等腰三角形
        printf("Isosceles Triangle\n");
        }
    if(edge1*edge1+edge2*edge2==edge3*edge3||edge1*edge1+edge3*edge3==edge2*edge2
    ||edge2*edge2+edge3*edge3==edge1*edge1){
        printf("Rectangular Triangle\n");
    }
    return 0;
}
