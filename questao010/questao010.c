#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                                      // RESPOSTA_C_INCLUDED
#include <stdio.h>

int main(void){
    char x1 [4] = {'a', 'b', 'c', 'd', 'e'};
    int i = 0;

    int  x2 [4] = {1,2,3,4};

    float x3 [4] = {1.1, 2.2, 3.3, 4.4, 4.5};

    double x4 [4] = {1.1243556, 2.13234455, 3.12345432, 4.1233445, 5.1233454676};

    printf("\n char: \n");
    for(i=0; i<5; i++){
        printf(" end  %d",x1+i);
    }

    printf("\n Int: \n");
    for(i=0; i<5; i++){
        printf(" end  %d",x2+i);
    }
    printf("\n Float: \n");
    for(i=0; i<5; i++){
        printf(" end  %d",x3+i);
    }
    printf("\n double\n");
     for(i=0; i<5; i++){
        printf(" end  %d",x4+i);
    }
}