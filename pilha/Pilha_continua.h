#include <stdio.h>
#include <stdlib.h>

typedef enum boolean{false=0, true=1} Boolean;
typedef int Tipo;

typedef struct{
    Tipo* vetor;
    int tam;
    int qtde;
}Pilha;

Pilha* pilha_criar(){
    Pilha* novo = (Pilha*) malloc(sizeof(Pilha));
    novo->qtde = 0;
    novo->tam = 5;
    novo->vetor = (Tipo*) calloc(novo->tam, sizeof(Tipo));

    return novo;
};

Boolean pilha_push(Pilha* p, Tipo elemento){
    p->vetor[p->qtde] = elemento;
    p->qtde++;

    return true;
};

Tipo* pilha_pop1(Pilha* p){
    Tipo* elemento = (Tipo*) malloc(sizeof(Tipo));
    *(elemento) = p->vetor[p->qtde-1];
    p->qtde--;

    return elemento;
};

Boolean pilha_pop2(Pilha* p, Tipo* end){
    *(end) = p->vetor[p->qtde-1];
    p->qtde--;

    return true;
};

void pilha_destruir(Pilha* p){
    free(p->vetor);
    free(p);
};

void pilha_imprimir(Pilha* p){
    printf("[ ");
    for(int i=p->qtde-1; i>=0; i--){
        printf("%d ", p->vetor[i]);
    }
    printf("]\n");
};

int pilha_posicao(Pilha* p, Tipo elemento){
    for(int i=p->qtde-1; i>=0; i--){
        if(p->vetor[i] == elemento){
            return i;
        }
    }
    return -1;
};

int pilha_tamanho(Pilha* p){
    return p->qtde;
};
//FUNÇÕES ADICIONAIS
int pilha_pushAll(Pilha* p, Tipo* vetor, int tam){
    
};

Pilha* pilha_inverter(Pilha* p);

Pilha* pilha_clone(Pilha* p);