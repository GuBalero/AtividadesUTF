#include <stdio.h>
#include <stdlib.h>

int * vetor_dobraTamanho( int **v, int tam){
    int *novo = (int*) calloc(tam*2, sizeof(int));
    novo = *v;

    return novo;
    
}

int main(){
    int* v = (int*) calloc(3, sizeof(int));
    v[0] = 2;
    v[1] = 4;
    v[2] = 6;
    int *novoTamanho = vetor_dobraTamanho(&v,3);

    for(int i=0; i<6;i++){
        printf("%d ", novoTamanho[i]);
    }

    //Resultado esperado
    // [2,4,6,0,0,0]
}