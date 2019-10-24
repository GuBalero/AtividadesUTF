#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int dado;
    struct no* prox;
}No;

int update(No* p, int pos, int valor){
    No* aux = p;

    for(int i=0; i<=pos; i++){
        if(i != pos){
            if(aux->prox != NULL){
                aux = aux->prox;
            }else{
                printf("oi");
                return 0;
            }
        }
    }
    if(aux != NULL){
        aux->dado = valor;
        return 1;
    }

    return 0;
}

void insert(No* p, int valor){
    No* aux = p;

    while(aux != NULL){
        if(aux->prox == NULL){
            aux->prox = (No*) malloc(sizeof(No));
            aux->prox->prox = NULL;
            aux->prox->dado = valor;
            return;
        }
        aux = aux->prox;
    }
}

void printList(No* p){
    
    No* aux = p;
    printf("[ ");

    while(aux != NULL){
        printf("%d ", aux->dado);
        aux = aux->prox;
    }

    printf("]\n");
}

void main(){
    No* p = (No*) malloc(sizeof(No));
    p->dado = 10;
    p->prox = NULL;

    insert(p, 20);
    insert(p, 30);
    insert(p, 40);
    printList(p);

    update(p, 3, 50);
    printList(p);
    
    insert(p, 60);
    printList(p);

    update(p, 4, 70);
    printList(p);


}