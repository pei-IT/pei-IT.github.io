#include<stdio.h>
int max2(int, int); //max�w�q�bmain�᭱�A�ҥH�n���ŧi

int main(){
        int a,b,max;
        printf("please enter first interger: ");
        scanf("%d",&a);
        printf("please enter second interger: ");
        scanf("%d",&b);
        printf("the maxinum: %d.\n",max2(a,b)); //�ƻsa,b���ȵ�max2��x,y�ܼ�
        return 0;
}
int max2(int x,int y){ //�^�Ǿ�ƫ��A �禡�W��(��Ӿ�ưѼ�)�A�ܼƦW�٥i�H��D�{���@�ˬ�a,b
    int max;
        if(x>=y){
            max=x; //return x;�i�H�ٲ�max�ܼ�
        } else{
            max=y; //return y;
        }
    return max;
}
