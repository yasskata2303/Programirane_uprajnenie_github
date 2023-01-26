#include <stdio.h>

int main(){
    int staq,menu;
    unsigned char stai=0;
    while(menu!=3){
        printf("\nVkluchi/izkluchi lampata w staq-1\n");
        printf("Printirai vkulchenite lampi-2\n");
        printf("Close-3\n");
        do{
            printf("Opciq-");
            scanf("%d",&menu);
        }while(menu<1||menu>3);
        if(menu==1){
            do{
                printf("\nSmeni lampata w staq-");
                scanf("%d",&staq);
            }while(staq<1||staq>8);
            stai=stai^(1<<(staq-1));
        }
        if (menu==2){
            printf("\nLampata e vkluchena w stai- ");
            for(int n=1;n<8;n++){
                if ((stai&(1<<(n-1)))==(1<<(n-1))){
                    printf("%d ",n);
                }
            }
        }
    }
    return 0;
}