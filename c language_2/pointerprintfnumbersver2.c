#include<stdio.h>
#include<stdlib.h>

int main(){
    int* numbers; //�ŧi�����ܼƧ���V���P���}�C
    int length=0;
    while(1){
        int input;
        scanf("%d", &input);
        if(input==0){
            break;
        }
        int* larger=malloc(sizeof(int)*(length+1)); //�C����@��while�j�鲣�ͧ�j��larger�}�C
        int i;
        for(i=0;i<length;i++){
            larger[i]=numbers[i];
        }
        numbers=larger; //�N��j��larger�}�C�Ĥ@�Ӥ�������}�s��ܫ����ܼ�number
        numbers[length]=input; //�����ܼ�numbers[]�N��q���Цs�񪺦�}�}�l��length��Alarger[0]=1
        length++; //���numbers���V��larger�}�C��lentgh�Ӥj
    }

    printf("Numbers: ");
    for(int i=0;i<length;i++){
        printf("%d ", numbers[i]); //whlle�j�鵲�������ܼƦs���}�O�̫�̤j��larger�}�C����
    }
    printf("\n");
    return 0;
}
