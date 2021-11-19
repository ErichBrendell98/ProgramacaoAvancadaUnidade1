#ifndef RESPOSTA_H_INCLUDED
#define RESPOSTA_H_INCLUDED

#endif              //RESPOSTA_H_INCLUDED
#include <stdio.h>

int main(){
    int i = 5, *p;
    p = &i;
    printf("%x %d %d %d %d", p, *p + 2, **&p, 3**p, **&p + 4);
    // 1 - exibe p em decimal
    // 2 - exibe o valor de p + 2 =  7
    // 3 - exibe o valor de i (i = 5)
    // 4 - exibe o valor de 3xp (3 x 5 = 15)
    // 5 - exibe o valor de 5 + 4 = 9
    return 0;
}