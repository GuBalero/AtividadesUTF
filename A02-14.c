#include <stdio.h>

struct aluno{
   short int ra;
   char nome[8];
   short int notas[2];
};
typedef struct aluno Aluno;

void main(){
    Aluno a1 = {10,"Joao", {85, 90}};   //sugestão de endereço: 416 

    short int *p1 = a1.notas + 1;      //sugestão de endereço: 432
    *p1 = 100;

    char* p2 =  a1.nome + 2;          //sugestão de endereço: 440
    *p2 = '@';

    printf("%d %s %d %d\n\n", a1.ra, a1.nome, a1.notas[0], a1.notas[1]);
    printf("%d %d\n", p1, *p1);
    printf("%d %c\n", p2, *p2);
}