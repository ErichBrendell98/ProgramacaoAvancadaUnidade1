#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                              // RESPOSTA_C_INCLUDED
#include <stdio.h>
int main(void){
    int mat[4] = {1,2,3,4};
    int  *p, x;

    p = mat + 1;                    //valido
    //p = mat++;                    //invalido
    //p = ++mat;                    //invalido
    x = (*mat)++;                   //valido

    return 0;
}