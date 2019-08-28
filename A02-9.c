#include <stdio.h>

struct aluno{
    short int ra;
    short int notas[2];
};
typedef struct aluno Aluno; 

void main(){

    Aluno a1 = {1, {85,90}}; 	//sugestão de endereço: 256
    Aluno *p1 = &a1;		//sugestão de endereço: 266
    short int *v = p1 -> notas;	//sugestão de endereço: 276
    v[1] = 55;

    printf("%d %d", v[0], v[1]);
    printf("a1.ra: %d\n", &a1);
    printf("a1.notas: %d, %d\n", &a1.notas[0], &a1.notas[1]);
    printf("%d %d\n", p1, *p1);
    printf("%d %d", v, *v);
}