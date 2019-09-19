#include <stdio.h>
#include <stdlib.h>

// DADOS

typedef struct{
    int** mat;
    int linhas;
    int colunas;
} Matriz;

// OPERAÇÕES (PROTOTIPO)

Matriz* matriz_cria(int linhas, int colunas);
void matriz_destroi(Matriz *m);
int matriz_acessa1(Matriz *m, int lin, int col);
void matriz_acessa2(Matriz *m, int lin, int col, int *end);
void matriz_atribui(Matriz *m, int lin, int col, int valor);
void matriz_imprime(Matriz *m);
int matriz_linhas(Matriz* m);
int matriz_colunas(Matriz* m);
void matriz_map1(Matriz* m, void (*funcao)(int*));
void matriz_map2(Matriz* m, int (*funcao)(int));

//OPERAÇÕES (IMPLEMENTAÇÃO)

Matriz *matriz_cria(int linhas, int colunas)
{
    Matriz *mat = (Matriz *)malloc(sizeof(Matriz));
    mat->mat = (int **)calloc(linhas, sizeof(int *));
    int i;
    for (i = 0; i < linhas; i++)
    {
        mat->mat[i] = (int *)calloc(colunas, sizeof(int));
    }
    mat->linhas = linhas;
    (*mat).colunas = colunas;

    return mat;
}