#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                  // RESPOSTA_C_INCLUDED
#include <stdio.h>

int main(){
    int i = 3, j = 5;
    int *p, *q;
    p = i;                      //válida
    q = &j;                     //válida
    p = &*&i;                   //valida
    //i = (*&)j;                // inválida
    //i = *&j;                  // valida 
    i = *&*&j;                  // valida
    //q = *p;                   //valida
    //i = (*p)++ + *q;          //valida
    printf("%d", q);
    return 0;
}