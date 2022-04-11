// Programa do fatorial v1

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

int main(void){
    // variáveis
    int n;
    // entrada
    printf("Digite um numero: ");
    scanf("%i",&n);
    // saída
    printf("Fatorial do numero %i! = %i\n",n,fatorial(n));
    return 0;
}

int fatorial(int n){
    int i,f=1;
    for(i=n;i>=1;i--){
        f*=i;
    }
    return f;
}