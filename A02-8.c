#include <stdio.h>
#include <string.h>

void main(){
    struct produto{
        int codigo;
        char descricao[8];
        float preco;
    };
    
    struct produto p1; //sugestão de endereço: 224
    struct produto p2; //sugestão de endereço: 240
    p1.codigo = 1;
    strcpy(p1.descricao, "Mouse");
    p1.preco = 25.50;
    
    p2 = p1;
    p2.codigo = 2;

    printf("%f", p2.preco);
}