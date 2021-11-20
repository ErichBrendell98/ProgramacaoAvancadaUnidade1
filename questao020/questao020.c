#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                                                                      //RESPOSTA_C_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<gc.h>
#include<assert.h>

int main(){
     int i;
     double Tempo;
     clock_t tempo[2];
     GC_INIT();

     tempo[0] = clock();                                                    //medindo o tempo de execucao da biblioteca de libgc
     for (i = 0; i<9999999; i++){
        int *p = (int *) GC_MALLOC(1000000*sizeof(int));
     }
     tempo[1] = clock();                                                    //medindo o tempo de execucao da biblioteca libgc

     Tempo = (tempo[1] - tempo[0]) *1000.0/ (double) CLOCKS_PER_SEC;
     printf("\nTempo gasto: %g us. \n", Tempo);

     tempo[0] = clock();                                                    //medindo o tempo de execucao do a biblioteca malloc

     for (i = 0; i<9999999; i++){
        int *p = (int *) malloc(1000*sizeof(int));
        free(p);
     }
     tempo[1] = clock();                                                    //medindo o tempo de execucao do a biblioteca malloc
     Tempo= (tempo[1] - tempo[0]) *1000000.0/ (double) CLOCKS_PER_SEC;
     printf("\nTempo gasto: %g us. \n", Tempo);
     return 0;
}