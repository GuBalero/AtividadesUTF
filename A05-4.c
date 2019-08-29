#include <stdio.h>

void vetor_dobra(int * vetor, int tam){
    for(int i=0; i<tam; i++){
        vetor[i] *= 2;
    }
}

void main(){
    int v1[5]={10,20,30,40,50};

    vetor_dobra(v1, 5);
}