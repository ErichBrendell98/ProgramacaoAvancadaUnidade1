#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                                          //RESPOSTA_C_INCLUDED
#include <stdio.h>

void soma(int *a, int *b, int *c, int *tam){
    for (int i =0; i<tam; i++){
        c[i] = a[i]+b[i];
    }
}

int main(){
    
    int n;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &n);
    int a[n], b[n], c[n];

    printf("Entre com o vetor A: ");
    for(int i =0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Entre com o vetor B: ");
    for(int i =0; i<n; i++){
        scanf("%d", &b[i]);
    }

    soma(a,b,c, n);

    printf("Soma dos Vetor: ");
    for(int i =0; i<n; i++){
        printf("%d ",c[i]);
    }
    return 0;
}