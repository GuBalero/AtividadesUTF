#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * vetor_aleatorio(int tam){
    int *vetor = (int*) calloc(tam, sizeof(int));
    
    srand(time(NULL));
    for (int i = 0; i < tam; i++)
    {
        *(vetor+i) = 1 + (rand() % 10);
    }
    
    return vetor;
}

void main(){
    int *v1 = vetor_aleatorio(10);
    int *v2 = vetor_aleatorio(100);

    for (int i = 0; i < 100; i++)
    {
        /* code */
    printf("%d ", v2[i]);
    }
}
