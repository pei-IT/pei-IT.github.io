#include<stdio.h>
int main(){
    int price[]={90,75,83,89,71,42}; //�}�C�i�H�z�LŪ�ɩάO�q�~����J��ƶi��ק�,���έק�{���X�޿�B��
    int total=0,id;
    while(1){ //�L�a�j��
        scanf("%d", &id);
        if(id==0){
            break; //if(����)id=0,�j����X�j��,�]���W�L�}�C���޽d��price[-1]�|���ͥ��w�q�欰
        }
        total+=price[id-1];
    }
    printf("Total: %d\n", total);
    return 0;
}
