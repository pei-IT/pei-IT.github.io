#include<stdio.h>
int main(){
    int number,sum=0,count=0;
    float average;
    printf("Please enter the numbers: (0: quit)\n");
    scanf("%d",&number); //�ܤַ|Ū�J�ܼ�number�@��
    while(number!=0){
        sum=sum+number;
        count=count+1; //count�N�Oln8 sum=sum+number���F�X��
        scanf("%d",&number);
    }
    if(count!=0){ //if�������count����0��,�L�X������,count��0��,�L�XN/A,�]���Ĥ@����J0������while�j��y������count��0
        average=(float)sum/count; //�j���૬�ܼ�sun���B�I��,sun/count�q��ư��אּ�B�I�ư�
        printf("The average is %f\n",average);
    } else{
        printf("The average is N/A\n");
    }
    return 0;
}
