#include <stdio.h>

void converter(int nota, char * conceito);

void main(){
    int nota=9.1;
    char conceito;
    converter(nota, &conceito);
    printf("%c", conceito);
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