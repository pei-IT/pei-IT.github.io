#include <stdio.h>
int main(){
    int edge1,edge2,edge3;
    printf("Please enter the length: ");
    scanf("%d%d%d", &edge1, &edge2, &edge3);
    if(edge1==edge2&&edge2==edge3){ //�]��C�y���P�ɥu�|����ӹB�⤸�@�ӹB��l���B��ҥH����T�ӹB�⤸==
        printf("Regular Triangle\n");

    }
    return 0;
}
