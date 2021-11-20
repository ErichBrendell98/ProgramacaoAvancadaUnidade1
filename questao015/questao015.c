#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                                          // RESPOSTA_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b){     // funcao de comparacao nessaria para funcao qsort
    if (*(int *)a == *(int*)b){                 //Comparação de igualdade entre elementos do vetor
        return 0;                               // retorna 0;
    }else{
        if(*(int *)a < *(int*)b){               // se a for menor que b, retorna -1
            return -1;
        }else{
            return 1;                           // se não retorna 1
        }
    }
}

int main(){
     int vet[10] = {12,1,0,3,13,4,5,67,1,3};    // vetor de elementos

    qsort(vet, 10, sizeof(int), comparar);      // função qsort, sabe como paramentros:  o vetor, tamanho do vetor, o tamanho do tipo do vetor, e a função comparar



    printf("vetor:");                           // imprime o vetor
    for(int i =0; i<10; i++){
        printf(" %d ", vet[i]);
    }

    return 0;
}