#include <stdio.h>
int main(){
    int a,b;
    char operator;
    float answer;
    printf("Please enter two integer: ");
    scanf("%d%c%d",&a,&operator,&b);
    if(operator=='+'){ //�b�B�⦡��+���B��l,���γ�޸�'+'�h���r��,if����(�ϥΪ̿�J�r����ASCII�s�X�Ʀr�P'+'�O�_�ۦP)
        answer=a+b;
    } else if(operator=='-'){
        answer=a-b;
    } else if(operator=='*'){
        answer=a*b;
    } else{ //���]�ϥΪ̥u���J+-*/�|�ӹB��,�]���e���T�ӧP�_����,�ĥ|�Ӥ@�w�O���k,�ҥHif(operator=='/')�i�ٲ�
        answer=(float)a/b; //�j���૬�ܼ�a���B�I��,�ܼ�b�����૬���B�I��,�B�I�ư��k���G���B�I�Ʀs�Janswer
    }
    printf("ANS: %f\n", answer);
    return 0;
}
