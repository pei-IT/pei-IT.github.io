#include <stdio.h>
int main(){
    int edge1,edge2,edge3,temp;
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    if(edge1>edge2){temp=edge1;edge1=edge2;edge2=temp;}
    if(edge1>edge3){temp=edge1;edge1=edge3;edge3=temp;}
    if(edge2>edge3){temp=edge2;edge2=edge3;edge3=temp;}
    if(edge1==edge3) //��if�j�A��{}���u�]�t�@���ԭz�ɡA{}�i�H�ٲ�
        printf("Regular Triangle\n");
    if(edge1==edge2||edge2==edge3){
        printf("Isosceles Triangle\n");
        }
    if(edge1*edge1+edge2*edge2==edge3*edge3){
        printf("Rectangular Triangle\n");
    }
    return 0;
}
