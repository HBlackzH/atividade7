#include <stdio.h>
#include <math.h>

int main(){
    int swi,whi,qtd;
    float valor,total;
do{
    printf("Digite a fruta escolhida:");
    scanf("%d",&swi);
    fflush;

    printf("\nDigite a quantidade:");
    scanf("%d",&qtd);

        switch(swi){
        case 1:
        valor=5,00 ;
        total+=valor*qtd;
        break;

        case 2:
        valor=1,00 ;
        total+=valor*qtd;
        break;

        case 3:
        valor=4,00 ;
        total+=valor*qtd;
        break;
        }

    
    printf("\nDeseja adicionar um novo item?\n1-sim / 0-Nao\n");
    scanf("%d",&whi);

}while ( whi !=0);   
printf("O valor das frutas é :%.2lf",total);


return 0;
}
