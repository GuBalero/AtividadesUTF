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
 * Estrutura usada para representar e armazenar a PILHA com alocação encadeada.
 */
typedef struct{
    No* topo;
    int qtde;
}Pilha;

Pilha* pilha_criar();
Boolean pilha_push(Pilha* p, Tipo elemento);
Tipo* pilha_pop1(Pilha* p);
Boolean pilha_pop2(Pilha* p, Tipo* end);
void pilha_destruir(Pilha* p);
void pilha_imprimir(Pilha* p);
int pilha_posicao(Pilha* p, Tipo elemento);
int pilha_tamanho(Pilha* p);
//FUNÇÕES ADICIONAIS
int pilha_pushAll(Pilha* p, Tipo* vetor, int tam);
void pilha_inverter(Pilha* p);
Pilha* pilha_clone(Pilha* p);
void no_destruir(No* n);
No* no_criar(Tipo dado);


/**
 * Cria a pilha e devolve seu endereço.
 * @return o endereço da pilha criada e inicializada.
 */
Pilha* pilha_criar(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    p->qtde = 0;
};

/**
 * Desaloca a pilha <p>.
 */
void pilha_destruir(Pilha* p){
    no_destruir(p->topo);
    free(p);
};

void no_destruir(No* n){
    if(n  == NULL) return;
    
    no_destruir(n->prox);
    free(n);
    
}

/**
 * Insere o elemento <elemento> no topo da pilha <p>.
 * @param p: Endereço da Pilha em que o elemento será inserido.
 * @param elemento: Elemento a ser inserido na pilha.
 * @return true se a inserção foi realizada com sucesso e false caso contrário
 */
Boolean pilha_push(Pilha* p, Tipo elemento){

    No* aux = no_criar(elemento);
    aux->prox = p->topo;
    p->topo = aux;
    p->qtde++;
    
    return true;

};

No* no_criar(Tipo dado){
    No* n = (No*) malloc(sizeof(No));
    n->prox = NULL;
    n->dado = dado;
    return n;
}

/**
 * Remove o topo da Pilha <p>, aloca um espaço dinamicamente para armazenar o * elemento removido e devolve o endereço do elemento.
 * @param p: Endereço da Pilha.
 * @return Endereço do elemento removido ou NULL caso contrário.
 */
Tipo* pilha_pop1(Pilha* p){
    No* aux = p->topo;

    p->topo = aux->prox;
    p->qtde--;

    Tipo* elemento = (Tipo*) malloc(sizeof(Tipo));
    elemento = &(aux->dado);
    free(aux);

    return elemento;
};

/**
 * Remove o topo da Pilha <p>, e armazena o elemento removido no endereço 
 * <end> recebido por parâmetro.
 * @param p: Endereço da Pilha.
 * @param end: Endereço de memória onde será armazenado o elemento removido
 * @return true se a remoçao foi realizada com sucesso e false caso contrário
 */
Boolean pilha_pop2(Pilha* p, Tipo* end){
    No* aux = p->topo;

    p->topo = aux->prox;
    p->qtde--;

    Tipo* elemento = (Tipo*) malloc(sizeof(Tipo));
    elemento = &(aux->dado);
    end = elemento;
    free(aux);
  
    return true;
};


/**
 * Imprime na saída padrão os elementos da pilha
 * @param p: Endereço da Pilha.
 */
void pilha_imprimir(Pilha* p){
    printf("[ ");

    No* aux = p->topo;
    while(aux != NULL){
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("]\n");
};

/**
 * Devolve a posição do elemento <elemento> na pilha <p>
 * @param p: Endereço da Pilha.
 * @param elemento: Elemento a ser encontrado
 * @return posição do <elemento> em <p> ou -1 caso contrário
 */
int pilha_posicao(Pilha* p, Tipo elemento){
    
    No* aux = p->topo;
    int cont = 0;

    while(aux != NULL){
        if(aux->dado == elemento) return cont;

        aux = aux->prox;
        cont++;
    }

    return -1;
};

/**
 * Devolve o tamanho da pilha <p>
 * @param p: Endereço da Pilha.
 * @return quantidade de elementos da pilha <p>
 */
int pilha_tamanho(Pilha* p){
    return p->qtde;
};

//FUNÇÕES ADICIONAIS

/**
 * Insere todos os elementos do vetor <vetor> na pilha <p>
 * @param p: Endereço da Pilha.
 * @param vetor: Endereço do vetor
 * @param tam: tamanho do <vetor>
 * @return quantidade de elementos inseridos na pilha <p>
 */
int pilha_pushAll(Pilha* p, Tipo* vetor, int tam){
    int i;
    for (i = 0; i < tam; i++){
        pilha_push(p, vetor[i]);
    }

    return i;
};

/**
 * Inverte a pilha <p>
 * @param p: Endereço da Pilha.
 */
void pilha_inverter(Pilha* p){
   
    Pilha* novo = pilha_criar();
    No* aux = p->topo;

    for (int i = 0; i < p->qtde; i++){
        pilha_push(novo, aux->dado);
        aux = aux->prox;
    }
    
    no_destruir(p->topo);
    p->topo = novo->topo;
    free(novo);

};

/**
 * Cria um clone da pilha <p>
 * @param p: Endereço da Pilha.
 * @return Endereço da pilha clonada.
 */
Pilha* pilha_clone(Pilha* p){
    Pilha* novo = pilha_criar();
    novo->topo = p->topo;
    novo->qtde = p->qtde;

    return novo;
};