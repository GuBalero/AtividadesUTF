#include <stdio.h>
#include <stdlib.h>

void imprimir(int * vetor);

void main(){
    int vetor[] = {1, 2, 3, 4, 5};
    imprimir(vetor);
}

void imprimir(int * vetor){
    printf("[");
    for(int i=0; i<=sizeof(*vetor); i++){
        (i != sizeof(*vetor))?printf("%d,", vetor[i]):printf("%d]", vetor[i]);
    }
}