/* 12) No desenvolvimento de algoritmo faz necessário o entendimento, para isto
análise o algoritmo acima e verifique qual será seu resultado dele? */

#include <stdlib.h>
#include <stdio.h>

void XY (char *t);

int main (void){
    char a[]={"ESTRUTURA"};
    XY(a);
    return 0;
}

void XY(char *t){
    int i;
    for(i=8;i>3;i--){
        printf("%c",t[i]);
    }
}

// Resposta: ARUTU