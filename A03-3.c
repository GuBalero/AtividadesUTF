#include <stdio.h>

void converter(int nota, char * conceito);
char convencional(int nota);


void main(){

    // Caso de Teste 1
    printf("%d - %c\n", 8, convencional(8));
    printf("%d - %c\n", 5, convencional(5));
    printf("%d - %c\n", 9, convencional(9));

    //Caso de Teste 2
    char conceito;
    converter(4, &conceito);
    printf("%d - %c\n", 4, conceito);
    converter(6, &conceito);
    printf("%d - %c\n", 6, conceito);

}

void converter(int nota, char * conceito){
    char c;

    if(nota >= 9)
        c = 'A';
    else if(nota >=7)
        c = 'B';
    else if(nota >=6)
        c = 'C';
    else
        c = 'I';

    *conceito = c;
}

char convencional(int nota){
    char c;

    if(nota >= 9)
        c = 'A';
    else if(nota >=7)
        c = 'B';
    else if(nota >=6)
        c = 'C';
    else
        c = 'I';

    return c;
}