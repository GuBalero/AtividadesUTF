#include <stdio.h>
#include <stdlib.h>
#include "Pilha_encadeada.h"

void main(){

    

    Pilha* p = pilha_criar();

    pilha_push(p, 10);
    pilha_push(p, 20);
    pilha_push(p, 30);

    pilha_imprimir(p);
    printf("%d\n", pilha_tamanho(p));

    pilha_inverter(p);

    pilha_imprimir(p);
    printf("%d", pilha_tamanho(p));
}