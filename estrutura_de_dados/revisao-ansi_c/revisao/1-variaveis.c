/* Variáveis */

#include <stdio.h>
#include <stdlib.h>

int main(void){
// "int main ()" -> função principal

    // *Declaração de váriaveis
    int idade;
    // ";" -> finalizar comando

    // *Função para escrever algo no console
    printf("Qual sua idade? \n");
    // "\n" -> pular linha

    // *Receber Dados
    scanf("%d", &idade);
    // "%d" -> recebe uma variável inteira
    // "&" -> indica a variável (&+variável)

    // *Saída
    printf("\n Sua idade = %d", idade);

    return 0;

}