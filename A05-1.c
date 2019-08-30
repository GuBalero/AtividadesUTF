#include <stdio.h>
#include <stdlib.h>

int * vetor_cloneA(int * v, int tam){
    int * vetor = (int*)calloc(tam,sizeof(int));
    vetor = v;

    return vetor;
}

void vetor_cloneB(int * v, int tam, int ** vetor){
    *vetor = (int*)calloc(tam,sizeof(int));
    *vetor = v;
}

void main(){
    int v[5] = {2,4,6,8,10};
    int *copia1, *copia2;

    copia1 = vetor_cloneA(v, 5);
    vetor_cloneB(v, 5, &copia2);

    for(int i=0; i<5;i++){
        printf("%d ", *(copia2 + i));
    }
    
}