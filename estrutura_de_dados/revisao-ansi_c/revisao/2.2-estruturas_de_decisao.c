/* Estruturas de Decisão */

// Switch

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int valor;

    printf("Digite um valor de 1 a 3: \n");
    scanf("%d", &valor);

    // *Estrutura de Decisão
    switch(valor){
    case 1:
        printf("Voce digitou 1\n");
        break;
    case 2:
        printf("Voce digitou 2\n");
        break;
    case 3:
        printf("Voce digitou 3\n");
        break;
    default:
        printf("Voce digitou um numero invalido\n");
    }

    return 0;

}