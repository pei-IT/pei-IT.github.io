#include <stdio.h>
int main(){
    int edge1,edge2,edge3;
    printf("Please enter the length: ");
    scanf("%d%d%d", &edge1, &edge2, &edge3); //如果用兩個if敘述會印兩次printf的內容，用減少印的次數來思考
    if(edge1==edge2||edge2==edge3||edge1==edge3){ //假設正三角形也是一種等腰三角形
        printf("Isosceles Triangle\n");
    }
    return 0;
}
