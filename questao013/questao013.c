#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                      // RESPOSTA_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>

int main(){

  float *p;
  int n, i, j, aux;

  printf("Tamanho de vetor: ");
  scanf("%d",&n);

  //alocando o vetor dinamicamente;
  p = (float*) malloc(n*sizeof(float));

  for(i=0;i<n;i++){
      scanf("%f",&p[i]);
  }

  for(i=0; i<n; i++){
      for (j=i+1;j<n;j++){
          if(p[i]>p[j]){
          aux = p[i];
          p[i]= p[j];
          p[j]=aux;
          }
      }
  }

  for(i=0;i<n;i++){
    printf("%.2f ",p[i]);

  }
free(p);
return 0;


}