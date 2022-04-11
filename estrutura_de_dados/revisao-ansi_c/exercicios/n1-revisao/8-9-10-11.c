/* 8 ... 11) Dado o seguinte algoritmo em C ANSI, 
informe os valores da variável B nos pontos indicados */

#include <stdlib.h>
#include <stdio.h>

int B = 350;

int main(void){

    int A = 50;
    B += A; // 8) Valor de B = 400
    printf("a) %i",B);

    int B = 300;
    B += A - 4; // 9) Valor de B = 346
    printf("\nb) %i",B);

    A *= 3 + 2;
    B = A; // 10) Valor de B = 250
    printf("\nc) %i",B);

    A = 200;
    B += A*2; // 11) Valor de B = 650
    printf("\nd) %i",B);

}