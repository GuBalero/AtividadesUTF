#include <stdio.h>
#include <stdlib.h>

typedef enum boolean{false=0, true=1} Boolean;
typedef int Tipo;

/**
 * Registro utilizado para acomodar cada elemento da pilha (Nó).
 */
typedef struct no{
    Tipo dado;
    struct no* prox;
}No;

/**
 * Estrutura usada para representar e armazenar a FILA com alocação encadeada.
 */
typedef struct{
    No* prim;
    No* ult;
    int qtde;
}Fila;

void no_remove(No* n);

Fila* fila_criar(){
    Fila* novo = (Fila*) malloc(sizeof(Fila));
    novo->qtde = 0;
    novo->prim = NULL;
    novo->ult = NULL;

    return novo;
};

Fila* fila_destruir(Fila* f){
    no_remove(f->prim);
    free(f);

    return NULL;
};

No* no_criar(Tipo elemento){
    No* n = (No*) malloc(sizeof(No));
    n->dado = elemento;
    n->prox = NULL;

    return n;
};

void no_remove(No* n){
    if(n == NULL) return;

    no_remove(n->prox);
    free(n);
};

Boolean fila_inserir(Fila* f, Tipo elemento){
    No* aux = no_criar(elemento);

    
    if(f->ult != NULL) f->ult->prox = aux;
    else f->prim = aux;

    f->ult = aux;
    f->qtde++;


    return true;
    
};

Tipo* fila_remover1(Fila* f){
    No* aux = f->prim;
    Tipo* r = (Tipo*) malloc(sizeof(Tipo));
    *(r) = aux->dado;
    
    f->prim = aux->prox;
    f->qtde--;

    free(aux);

    if(f->qtde == 0) f->ult = NULL;

    return r;
};

Boolean fila_remover2(Fila* f, Tipo* endereco);

Boolean fila_primeiro(Fila* f, Tipo* endereco){
    if(f->prim != NULL){
        endereco = &(f->prim->dado);
        return true;
    }
    return false;
};

int fila_tamanho(Fila* f){
    return f->qtde;
};

int fila_contem(Fila* f, Tipo elemento){
    No* aux = f->prim;
    int r = 0;

    while(aux != NULL){
        if(aux->dado == elemento){
            r = 1;
            break;     
        }
        
        else if(f->qtde == 1) break;
    }
    
    return r;
};

void fila_imprimir(Fila* f){

    printf("[ ");
    
    No* aux = f->prim;
    while(aux != NULL){
        printf("%d ", aux->dado);
        aux = aux->prox;
    }

    printf("]\n");
};