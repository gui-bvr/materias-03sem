/* Estruturas de Repetição */

// For, While, Do...While
// para, enquanto, faça...enquanto

#include <stdlib.h>
#include <stdio.h>

/* Utilizando o For (para) */

/* Exemplo: programa que receba e some 5 números
inteiros e apresente a soma no final. */

int main(void){

    //Variáveis
    int numero, soma = 0;

    for(int i = 0; i < 5; i++){
    // inicialização; critério de parada; forma de incremento.
    //"int i" iniciando em 0; enquanto i < 5, incrementa de 1 em 1...
        
        //Entrada
        printf("Informe um numero: ");
        scanf("%d", &numero);
    
        //Processamento
        soma = soma + numero;
    }

    //Saída
    printf("A soma e %d", soma);

    return 0;
}