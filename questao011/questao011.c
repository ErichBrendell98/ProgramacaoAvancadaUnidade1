#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif // RESPOSTA_C_INCLUDED
#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;            //valido
    scanf("%f", &aloha);         //valido
    //aloha = value";            invalido
    printf("%f", aloha);         //valido
    coisas[4][4] = aloha[3];     //valido
    //coisas[5] = aloha;         invalido
    //pf = value;                invalido
    pf = aloha;                  //valido

    return 0;
}