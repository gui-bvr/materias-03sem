/* Tipos de Dados */

/* Tipos Alfanuméricos: Characteres e "Strings". */
// Em C, não existe o tipo de dado String.

// Ex. de String: "exemplo de string, um conjunto de characterers em aspas duplas"
// Ex. de Caractere: 'a' (aspas simples)

#include <stdlib.h>
#include <stdio.h>

int main(void){

    // *Declaração de String em C
    char nome[50], opcao;

    printf("Digite seu nome: \n");
    gets(nome);
    // gets(váriavel) -> recebe uma variável string

    printf("Seu nome e %s.\n", nome);

    printf("\n # Informe uma opcao # \n");
    printf("a - Saldo da conta \n");
    printf("b - Extrato da conta: \n");
    printf("c - Limite da conta: \n");
    scanf("%c", &opcao);
    // "%c" -> recebe uma variável char

    if(opcao == 'a'){
        printf("Saldo da conta.....");
    }
    else if(opcao == 'b'){
        printf("Extrato da conta.....");
    }
    else if(opcao == 'c'){
        printf("Limite da conta.....");
    }
    else{
        printf("Opcao Invalida");
    }

    return 0;

}