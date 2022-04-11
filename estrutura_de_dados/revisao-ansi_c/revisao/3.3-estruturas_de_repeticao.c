/* Estruturas de Repetição */

#include <stdlib.h>
#include <stdio.h>

/* Utilizando o Do...While (faça...enquanto) */

/* Utilizado quando precisa de um loop onde não se tennha
um número fixo de elementos, mas que tenha um critério de parada,
e a condição de parada é checada após a primeira execução. */

/* Exemplo: programa que receba e some números
inteiros até que o número de entrada seja 0,
e apresente a soma no final. */


int main(void){

    int numero, soma = 0;

    do{
        printf("Informe um numero: ");
        scanf("%d", &numero);
        
        soma = soma + numero;
    }
    while(numero !=0);

    printf("A soma e %d", soma);

    return 0;
}