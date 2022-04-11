/* Tipos de Dados */

/* Tipos Númericos: Inteiros e Reais. */

#include <stdlib.h>
#include <stdio.h>

/* Exemplo no Código:

int main(){

    // Números Inteiros:
    int numero_inteiro; // ex: -82, 9, 873... 

    // Nímeros Reais:
    float media; // ex: 43.6, 1.5, 565.99...
    
    double outra_media; 
    // "double" suporta uma quantidade maior de dados.

    return 0;
} */

//Exemplo: Calculo de Média de 3 notas.
int main(void){

    float media, nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    // "%f" -> recebe uma variável float
    // "%lf" -> recebe uma variável double

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua media e = %.2f", media);
    // "%.2f" -> declara uma variável float com 2 casas decimais após o "."

    return 0;

}