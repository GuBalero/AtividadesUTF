#include <stdio.h>
#include <stdlib.h>
#include "Pilha_continua.h"

void main(){
    Pilha* p = pilha_criar();

    pilha_push(p, 10);
    pilha_push(p, 20); 

    pilha_pop1(p);

    pilha_imprimir(p);

    printf("%d", pilha_tamanho(p));
}