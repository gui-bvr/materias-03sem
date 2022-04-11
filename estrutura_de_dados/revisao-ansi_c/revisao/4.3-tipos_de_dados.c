/* Tipos de Dados */

/* Tipos Booleanos: True/False. */
// Verdadeiro ou Falso

/* Em C, não existe um tipo de dado "boolean", porém,
A linguagem reconhece o valor 0 como Falso (false)
e qualquer valor diferente de 0 como Verdadeiro (true) */

#include <stdlib.h>
#include <stdio.h>

int main(void){
	
    int booleano = 1;

	if(0){
		printf("Verdadeiro...");
	}else{
		printf("Falso...");
	}

	return 0;
    
}