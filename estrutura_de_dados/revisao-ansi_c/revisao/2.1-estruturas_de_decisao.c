/* Estruturas de Decisão */

// if, else if, else

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int idade;

    printf("Qual sua idade? \n");
    scanf("%d", &idade);
    printf("Sua idade = %d \n", idade);

    // *Estrutura de Decisão
    if(idade < 18){ // "if" -> se
        printf("Voce e menor de idade. \n");
    }
    else if(idade >= 18 && idade < 60){ // "else if" -> então se
        printf("Voce e maior de idade. \n");
    }
    else{ // "else" -> então
        printf("Voce e idoso. \n");
    }
    // Ordem: if > else if > else

    return 0;

}