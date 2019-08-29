#include <stdio.h>

void vetor_incrementa(int * vetor, int tam){
    for(int i=0; i<tam; i++){
        vetor[i] += 1;
    }
}

void main(){
    int v1[5]={10,20,30,40,50};

    vetor_incrementa(v1, 5);

}