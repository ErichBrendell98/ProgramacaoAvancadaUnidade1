#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                                                              // RESPOSTA_C_INCLUDED
#include<gc.h>
# include<assert.h>
# include<stdio.h>

int  main (void) {
        GC_INIT ();                                                 // Inicializar a bibliteca  LibGC
        int *p = ( int *) GC_MALLOC ( 1000 * sizeof ( int ));
        int * q = ( int *) GC_MALLOC ( 1000 * sizeof ( int ));      // A memória é alocada atras função GC_MALLOC, sem precisar alocar e librar atras  do free
        *p = 50 ;
        *q = 25 ;
        int mult = *p * *q;
        printf ( " A multiplicação é e %d " , mult);
        return 0;
}
