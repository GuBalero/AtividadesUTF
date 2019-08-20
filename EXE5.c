#include <stdio.h>
#define N 6

void sacar(int valor, int * notas);
int contNota(int valor, int nota);
void mostrarNotas(int* notas);

void main(){
    int valor=276;
    int notas[N]; //NOTAS NO VETOR: 0 = 100; 1 = 50; 2 = 20; 3 = 10; 4 = 5; 5 = 2;
    
    sacar(valor, notas);

    printf("Valor: %d\n", valor);
    mostrarNotas(notas);
}

void sacar(int valor, int* notas){
    int valores[6] = {100,50,20,10,5,2};
    int cont;

    for(int i=0; i<N; i++){
        cont = contNota(valor, valores[i]);
        notas[i] = cont;
        valor -= cont * valores[i];
    }
}

int contNota(int valor, int nota){
    if((valor == 11 || valor == 13) && nota == 5) return 1;

    if(valor % nota == 1 || valor % nota == 3) return (valor/nota)-1;

    return valor/nota;
}

void mostrarNotas(int* notas){
    int valores[6] = {100,50,20,10,5,2};

    for(int i=0; i<N; i++)
        printf("%d: %d\n", valores[i], notas[i]);
}