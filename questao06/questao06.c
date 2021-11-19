#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                      // RESPOSTA_C_INCLUDED
#include <stdio.h>

int main(){

    int vet[5] = {1,2,3,4,5};
    int *pulo;
    int i;
    pulo = vet;

    printf(" p = %d" ,*(pulo+2));
    printf("p=%d", *(pulo + 4));        //A expressão que representa o teceiro elemento do vetor!
    printf("p =%d", (pulo + 4));
    printf("p =%d", (pulo+2));

}