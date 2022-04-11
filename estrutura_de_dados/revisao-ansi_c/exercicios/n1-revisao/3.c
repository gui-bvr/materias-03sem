/* 3) Construa um programa em C ANSI que leia dez números inteiros, digitado pelo
usuário. Grave em um vetor apropriado os dados, após imprima em tela em
ordem crescente. */

// INCOMPLETO

#include <stdlib.h>
#include <stdio.h>

int main(void){

    int valor[10], i;

    for(i=0; i<10; i++){
        printf("Digite o %d valor = \n ", i+1);
        scanf("%d", &valor[i]);
    }

    printf("\nOrdem Crescente:\n");

    for(i=0; i<10; i++){
        printf("%d\n", valor[1+i]); 
    }

    return 0;
}

/*
for(i=0;i<10;i++){
for(j=0;j<10;j++){
if(v[i]>v[j]){
troca(v[i],v[j]);
}
}
}
*/