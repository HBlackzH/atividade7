#include <stdio.h>
#include <math.h>


int main (){

    int n=50,contador;
    int soma=0;

    for (contador = 0; contador <= n; contador+=2)  {   
    printf("\n%d",contador);
    soma += contador;    
}  
    printf("\nSoma de todos :%d",soma);
    


                    
    return 0;
}       
