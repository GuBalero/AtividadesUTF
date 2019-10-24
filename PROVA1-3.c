#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int linhas;
    int colunas;
    int** matriz;
}Matriz;

Matriz* criaMatriz(int linhas, int colunas){
    Matriz* matriz = (Matriz*) malloc(sizeof(Matriz));
    matriz->colunas = colunas;
    matriz->linhas = linhas;
    matriz->matriz = (int**) calloc(linhas, sizeof(int*));
    for(int i=0; i<linhas; i++){
        matriz->matriz[i] = (int*) calloc(colunas, sizeof(int));
        matriz->matriz[i][0] = 5;
        matriz->matriz[i][1] = 5;
        matriz->matriz[i][2] = 5;
    }
    return matriz;
}

void main(){
    Matriz* matriz;
    matriz = criaMatriz(3,3);

    ////////////////////////////

    //matriz->matriz[0][2] = 20;
    //( * ( (*matriz).matriz + 1 ) )[1] = 10;
    //*( *(matriz->matriz + 2) + 2) = 30;
    //*( *( (*matriz).matriz) ) = 40;
    //( (*matriz).matriz + 0 )[2] = 10;
    //*( matriz->matriz[ (*matriz).linhas - 1]) = 50;
    matriz->matriz[ (*matriz).linhas - 2][0] = 60;

    ////////////////////////////

    printf("%d %d %d\n", matriz->matriz[0][0], matriz->matriz[0][1], matriz->matriz[0][2]);
    printf("%d %d %d\n", matriz->matriz[1][0], matriz->matriz[1][1], matriz->matriz[1][2]);
    printf("%d %d %d\n", matriz->matriz[2][0], matriz->matriz[2][1], matriz->matriz[2][2]);
}