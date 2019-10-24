#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char cod[6];
    char * nome;
    float * preco;
    int qtd; //qtd produtos no estoque
    int qtdPrecos; //qtd precos
}Produto;

typedef struct{
    char * nome;
    Produto** produtos;
    int qtd; //qtd produtos
    int tam; //tamnho do vetor
}Empresa;

Produto* novoProduto(char* cod, char* desc, float preco, int qtde){
    Produto* produto = (Produto*) malloc(sizeof(Produto));
    return produto;
}

void main(){
    
}

