#include <stdio.h>
#include <stdlib.h>
#include "Pilha_encadeada.h"

void main(){

    

    Pilha* p = pilha_criar();
    Pilha* p2;
    pilha_push(p, 10);
    pilha_push(p, 20);
    pilha_push(p, 30);

    pilha_imprimir(p);

    p2 = pilha_clone(p);

    pilha_imprimir(p2);

}