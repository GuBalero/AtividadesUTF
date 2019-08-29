#include <stdio.h>
#include <stdlib.h>

int* vetor_novoA(int tam,int valor);
void vetor_novoB(int tam, int valor, int * vetor);

void main(){

    int *v1, *v2;
    v1 = vetor_novoA(6,3);
    vetor_novoB(5, 2, v2);

    printf("%d", (v2[0]));
  
    
}


int* vetor_novoA(int tam,int valor){

    int* vetor = (int*)calloc(tam,sizeof(int));
    *vetor = valor;

    return vetor;
 
}

void vetor_novoB(int tam, int valor, int * vetor){

    vetor = (int*)calloc(tam,sizeof(int));
    *vetor = valor;
}