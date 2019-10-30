#include <stdio.h>
#include <stdlib.h>
#include "FIlaEncadeada.h"

void main(){
    Fila* f = fila_criar();

    fila_inserir(f, 10);
    fila_inserir(f, 20);
    fila_inserir(f, 30);

    fila_imprimir(f);

    fila_remover1(f);
    fila_remover1(f);

    fila_imprimir(f);

    int* aux;
    printf("%s", fila_primeiro(f, aux));
}