/* 4) Uma abordagem em programação é o uso de recursividade. Construa um
algoritmo em C ANSI, onde deve possuir uma função que usa recursividade para
resolver os números triangulares de Pitágoras, sabendo que a sequência dos
números triangulares são: 1, 3, 6, 10, 15, 21, 28, 36, ... */

int main(void){
    printf("PIT 5 = %i\n",pitagoras(5));
    return 0;
}

int pitagoras(int n){
    if(n==1){
        return 1;
    }else{
        return n+pitagoras(n-1);
    }
}