#include <stdio.h>
#include <stdlib.h>

typedef enum boolean{false=0, true=1} Boolean;
typedef int Tipo;


typedef struct no{
    Tipo dado;
    struct no* prox;
    struct no* ant;
}No;

typedef struct{
    No* primeiro;
    No* ultimo;
    int qtde;
}Lista;


Lista* lista_criar(){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->qtde = 0;
    novo->ultimo = NULL;
    novo->primeiro = NULL;
    
    return novo;
}

void lista_destruir(Lista* l);

No* no_novo(int dado){
    No* n = (No*) malloc(sizeof(No));
    n->dado = dado;
    n->ant = n->prox = NULL;

    return n;
}

void lista_inserir(Lista* l, Tipo elemento, int posicao){
    No* aux = l->primeiro;
}

void lista_inserir_fim(Lista* l, Tipo elemento){
     No* novo = no_novo(elemento);
     No* aux = l->ultimo;

     l->ultimo = novo;
     l->ultimo->ant = aux;
     aux->prox = l->ultimo;

     l->qtde++;
     if(l->qtde == 1) l->primeiro = l->ultimo;
}

int* lista_remover1(Lista* l, int posicao);
Boolean lista_remover_elemento(Lista* l, Tipo elemento);
Boolean lista_remover2(Lista* l, int posicao, Tipo* endereco);


Boolean lista_buscar(Lista* l, int posicao, int* endereco);
Boolean lista_contem(Lista* l, Tipo elemento);
int lista_posicao(Lista* l, Tipo elemento);

int lista_tamanho(Lista* l){
    printf("%d\n", l->qtde);
}

void lista_imprimir(Lista* l){
    No* aux = l->primeiro;

    printf("[ ");
    while(aux != NULL){
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("]\n");
}
