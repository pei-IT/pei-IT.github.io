#include<stdio.h>
#include<stdlib.h>

int main(){
    int numbers[10]; //���]�ϥΪ̿�J10�Ӿ�ƥH��
    int length;
    for(length=0;length<10;length++){ //�j�����0��9�@10��
        int input;
        scanf("%d", &input);
        if(input==0){
            break; //�ԭz�S������|�y���sĶ����O�L�k����;
        }
        numbers[length]=input; //�N�ϥΪ̿�J����ƨ̧Ǧs�Jnumbers�}�C
    }

    printf("Numbers: ");
    for(int i=0;i<length;i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
