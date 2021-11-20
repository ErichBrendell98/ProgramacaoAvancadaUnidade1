#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                                          // RESPOSTA_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b){     //funcao de comparacao nessaria para funcao qsort
    if (*(int *)a == *(int*)b){                 //comparacao de igualdade entre elementos do vetor
        return 0;                               //retorna 0;
    }else{
        if(*(int *)a < *(int*)b){               //se a for menor que b, retorna -1
            return -1;
        }else{
            return 1;                           //se nao retorna 1
        }
    }
}

int main(){

  float *p;                                     //ponteiro
  int n;                                        //variaveis necessarias

  printf("Tamanho de vetor: ");                 //recebendo o tamanho do vetor
  scanf("%d",&n);

  //alocando o vetor dinamicamente;
  p = (float*) malloc(n*sizeof(float));

  for(int i=0;i<n;i++){                         //recebendo o valores do vetor
      scanf("%f",&p[i]);
  }

  qsort(p,n,sizeof(float), comparar);           //funcao qsort que recebe, ponteiro do vetor, o  tamanho, o tamanho do tipo do vetor, e a funcao comparar

  for(int i=0;i<n;i++){                         //imprimindo o vetor
    printf("%.2f ",p[i]);

  }
free(p);                                        // liberando o espaço da memoria
return 0;
}