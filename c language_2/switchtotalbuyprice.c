#include<stdio.h>
int main(){
    int id;
    int total=0;
    printf("Please enter the ID: \n");
    do  {
        scanf("%d",&id); //�ܤ֭n��J�@��id
        switch(id){
            case 1: total+=90; break;
            case 2: total+=75; break;
            case 3: total+=83; break;
            case 4: total+=89; break;
            case 5: total+=71; break;
        }
    } while(id!=0); //�p�Gid���O0�^��do�~���J�U�@��id//do-while�z�ywhile()�᭱�n�[����;
    printf("Total: %d\n",total);
    return 0;
}
