#include <stdio.h>
#include "TAD-vetor.h"

void main(){
    Vetor *vetor = vetor_new();
    vetor -> size = 5;
    vetor_expand(vetor);
    printf("%d", vetor->size);

    //vetor_print(vetor);

}