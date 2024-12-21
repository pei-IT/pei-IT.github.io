#include<stdio.h>
int main(){
    int id;
    int total=0;
    printf("Please enter the ID: \n");
    do  {
        scanf("%d",&id); //至少要輸入一次id
        switch(id){
            case 1: total+=90; break;
            case 2: total+=75; break;
            case 3: total+=83; break;
            case 4: total+=89; break;
            case 5: total+=71; break;
        }
    } while(id!=0); //如果id不是0回到do繼續輸入下一個id//do-while述句while()後面要加分號;
    printf("Total: %d\n",total);
    return 0;
}
