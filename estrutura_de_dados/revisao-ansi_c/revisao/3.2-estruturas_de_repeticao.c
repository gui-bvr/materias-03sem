/* Estruturas de Repetição */

#include <stdlib.h>
#include <stdio.h>

/* Utilizando o While (enquanto) */

/* Utilizado quando precisa de um loop onde não se tennha
um número fixo de elementos, mas que tenha um critério de parada,
e antes de iniciar um loop, a condição é checada. */

/* Exemplo: programa que receba e some números
inteiros até que o número de entrada seja 0,
e apresente a soma no final. */


int main(void){

    int numero, soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    while(numero !=0){

        soma = soma + numero;

        printf("Informe um numero: ");
        scanf("%d", &numero);
    }

    // *Saída
    printf("A soma e %d", soma);

    return 0;
}