#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                      // RESPOSTA_C_INCLUDED
#include <stdio.h>

int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    //importante o ponteiro f está sempre na posição igual a zero
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);                   // Numero de execução
        printf("vet[%d] = %.1f",i, vet[i]);     //valor do elemento do vetor
        printf("*(f + %d) = %.1f",i, *(f+i));   // valor do elemento  do ponteiro
        printf("&vet[%d] = %X",i, &vet[i]);     // endereço do elemento do vetor
        printf("(f + %d) = %X",i, f+i);         // endereço  do elemento do ponteiro
    }
}