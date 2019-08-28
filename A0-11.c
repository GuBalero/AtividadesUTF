#include <stdio.h>

struct produto{
    int codigo;
    char descricao[8];
    float preco;
};

void main(){

    struct produto prod = {10,"memoria",100.55}; 	//sugestão de endereço: 320

    void *p;						//sugestão de endereço: 336

    p = &prod.codigo;
    short int *cod = (short int*)p;			//sugestão de endereço: 344
    printf("Codigo: %d\n", *cod);
    
    p = &prod.preco;
    printf("Preco: %.2f\n", *(float*)p);

}