#include <stdio.h>
#include "TAD-vetor.h"

void main(){
    Vetor *vetor = vetor_new();
    vetor_insert(vetor, 50, 0);
    vetor_insert(vetor, 40, 1);
    vetor_insert(vetor, 30, 2);
    vetor_insert(vetor, 20, 3);
    vetor_insert(vetor, 10, 4);
    vetor_insert(vetor, 60, 5);

    vetor_print(vetor);

}