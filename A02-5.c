#include <stdio.h>

struct aluno{
    short int ra;
    char nome[10];
    float nota
};

void main(){

    struct aluno a; //sugestão de endereço: 128
    printf("&a: %u \n", &a);
    printf("&a.ra: %u \n", &a.ra);
    printf("&a.nome: %u \n", &a.nome);
    printf("&a.nota: %u \n", &a.nota);


}