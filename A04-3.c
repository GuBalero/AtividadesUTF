#include <stdio.h>
#include <stdlib.h>

int maiorIndice(int * vetor);

void main(){
    int vetor[] = {1, 2, 10, 4, 5};
    printf("Indice do maior valor: %d", maiorIndice(vetor));

}

int maiorIndice(int * vetor){
    int indice = 0;
    int valor = vetor[0];

    for(int i=1; i<=sizeof(*vetor); i++){
        if(vetor[i] > valor){
            indice = i;
            valor = vetor[i];
        }
    }

    return indice;
}