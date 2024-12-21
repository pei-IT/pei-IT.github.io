#include<stdio.h>
int main(){
    int number;
    int count;
        for(
            number=1;
            number%3!=2||number%5!=3||number%7!=2;++number); //{}空的大括號可省略後面加分號;
    printf("%d",number);
    return 0;

}
