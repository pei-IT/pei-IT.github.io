#include<stdio.h>
int main(){
    int number;
    int sum=0;
    printf("Please enter the numbers (quit=0): \n");
    scanf("%d",&number); //�]���ܼ�number�bln7 while����P�_�ɩ|������
    while(number!=0){ //�ҥH�ƻs�@��scanf�z�yŪ�J�ϥΪ̿�J���ȵ�number
    sum=sum+number;
    scanf("%d",&number);
    }
    printf("The sum is: %d.\n",sum);
    return 0;
}
