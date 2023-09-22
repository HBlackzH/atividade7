#include<stdio.h>

int main(){

    char sexo, olhos, cabelos;
    int totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0, idade, opcao;
    float salario, porcetagem;

    do
    {

        do{
            fflush(stdin);
            printf("Digite o sexo: (m ou f)\n");
            scanf("%c", &sexo);
            if(sexo == 'm'){
                totalM ++;
            }else if (sexo == 'f'){
                totalF ++;
            }

            if (sexo != 'm' && sexo != 'f')
        
            {
                printf("\nOpcao Invalida");
            }
            

        }while (sexo != 'm' && sexo != 'f');

        do{
            fflush(stdin);
            printf("\nDigite a cor dos olhos: a (azuis), v (verdes), c (castanhos), p (pretos)");
            scanf("%c", &olhos);
            if (olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v')
            {
                printf("\nOpcao Invalida");
            }

        }while(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v');

        do{
            fflush(stdin);
            printf("\nDigite a cor dos cabelos: l (loiros), c (castanhos), p (pretos), r (ruivos)");
            scanf("%c", &cabelos);
            if (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r')
            {
                printf("\nOpcao Invalida");
            }

        }while(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r');

        do{
            fflush(stdin);
            printf("Digite a Idade: ");
            scanf("%d", &idade);
            if(idade < 10 || idade > 100){
               printf("Opcao Inavalida");
               }

       }while (idade < 10 || idade > 100);

        do{
            fflush(stdin);
            printf("Digite o Salario: ");
            scanf("%f", &salario);
            if(salario < 0){
               printf("Opcao Inavalida");
               }

       }while (salario < 0);

       if(sexo == 'f' && olhos == 'c' && cabelos == 'c' && idade > 18 && idade< 35){
        totalEspecifico++;

       }

       totalHabitantes ++;


        printf("\nDeseja cadastrar um novo habitante: 1 sim -1 Nao");
        scanf("%d", &opcao);
 
    } while (opcao != -1);

    porcetagem = totalEspecifico/totalHabitantes*100;

    printf("\nTotal de habitantes cadastrados: %d", totalHabitantes);
    printf("\nTotal de Homens cadastrados: %d", totalM);
    printf("\nTotal de Mulheres cadastradas: %d", totalF);
    printf("\nPordentagem de pessoas: %.2f", porcetagem);
    
}
