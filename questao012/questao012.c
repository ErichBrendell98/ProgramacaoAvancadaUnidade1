#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                      // RESPOSTA_C_INCLUDED
#include <stdio.h>

// Ponteiro para função é um recurso usado para acessar uma função através de um ponteriro

//função usada para multiplicar dois números inteiros

int mult( int a, int b){
    return a*b;
}

int main(){
    int a, b;
    // Ponteiro para função com dois parametro do tipo inteiros
    int (*p)(int, int);
    printf("Digite 2 numeros: ");

    scanf("%d",  &a);
    scanf("%d", &b);
    //atribui ao ponteiro o endereço da função
    

    p = mult;
    // p(a,b) -> passa dois parametros do tippo inteiros para o ponteiro onde está localizado o endereço da função mult.
    printf("%d X %d = %d",a,b, p(a,b));

    return 0;
}