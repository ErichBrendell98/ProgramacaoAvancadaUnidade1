#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED

#endif                                                                                      //RESPOSTA_C_INCLUDED
#include <stdio.h>

void multiplicaMatriz(int **pa, int **pb, int **pc, int linhaA, int colunA,int colunB){

 int aux;
    for(int i=0;i<linhaA;i++){
        for(int j=0;j<colunB;j++){
            aux = 0;
            for(int k=0;k<colunB;k++)
            {
                aux +=  pa[i][k] * pb[k][j];
            }
            pc[i][j] = aux;
            aux = 0;
        }
    }


}

int main(){
    int **a,**b,**c;
    int i,j;
    int linhaA = 2, colunaA = 2, linhaB = 2, colunaB = 2;

    a = (int**)malloc(linhaA*sizeof(int*));                                                 //alocacao da matriz do bloco auxiliar
    a[0] = (int*)malloc(linhaA*colunaA*sizeof(int));                                        //alocacao das linhas
    for(i=1;i<linhaA;i++){
        a[i]=a[i-1] + colunaA;
    }
    b = (int**)malloc(linhaB*sizeof(int*));                                                 //alocacao da matriz do bloco auxiliar
    b[0] = (int*)malloc(linhaB*colunaB*sizeof(int));                                        //alocacao das linhas

    for(i=1;i<linhaB;i++){
        b[i]=b[i-1] + colunaB;
    }
    c = (int**)malloc(linhaA*sizeof(int*));                                                 //alocacao da matriz do bloco auxiliar
    c[0] = (int*)malloc(linhaA*colunaB*sizeof(int));                                        //alocacao das linhas

    for(i=1;i<linhaA;i++){
        c[i]=c[i-1] + colunaB;
    }
    printf("Matriz a eh:\n");
    //matriz A
    a[0][0]=3; a[0][1]=4;
    a[0][2]=1; a[0][3]=2;

    //matriz B
    b[0][0]=9; b[0][1]=3;
    b[1][0]=5; b[1][1]=7;

    multiplicaMatriz(a,b,c,linhaA,colunaA,colunaB);                                         //chamando a funcao que mutiplica as  matrizes
    printf("Matriz AxB =C eh: \n");
    for(i=0;i<linhaA;i++){
        for(j=0;j<colunaB;j++){
            printf("%d,",c[i][j]);
        }
        printf("\n");
    }

    //libera a memória
    free(a[0]);
    free(a);
    free(b[0]);
    free(b);
    free(c[0]);
    free(c);

    return 0;
}