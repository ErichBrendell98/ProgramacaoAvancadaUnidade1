#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                              // RESPOSTA_C_INCLUDED
#include <stdio.h>

int main(){
    int vet[] = {4,9,13};
    int i;

    for(i=0;i<3;i++){
        printf("%d ",*(vet+i));     // imprime os valores do vetor
    }

    int vet1[] = {4,9,13};
    int i1;
    for(i1=0;i1<3;i1++){
        printf("%X ",vet1+i1);      // Mostra os valores do endereço do vetor
    }
}