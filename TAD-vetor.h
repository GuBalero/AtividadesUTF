#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#define LENGTH 5

typedef struct{
    int* vetor;
    int size; //quantidade de elementos armazenados no vetor
    int length; // tamanho alocado
} Vetor;

typedef int DataType;

typedef enum { True, False } Boolean;

// Operações do Vetor

Vetor* vetor_new();
void vetor_free(Vetor* v);
void vetor_print(Vetor* m);
void vetor_expand(Vetor* v);
Boolean vetor_insert(Vetor* v, DataType element, int index);


Vetor* vetor_new(){
    Vetor *novo = (Vetor*) malloc(sizeof(Vetor));

    novo->vetor = (int*) calloc(LENGTH, sizeof(int));
    novo->size = 0;
    novo->length = LENGTH; 

    for (int i = 0; i < novo->length; i++){
        novo->vetor[i] = INT_MAX;
    } 

    return novo;
    
}

void vetor_free(Vetor* v){

    free(v);

}

void vetor_print(Vetor * m){
    for (int i = 0; i < m->size; i++){
        printf("%d\t", m->vetor[i]);
    }   
}

void vetor_expand(Vetor* v){
    v->length *= 2;
    v->vetor = (int*) calloc(v->length, sizeof(int));

     for (int i = v->size; i < v->length; i++){
        v->vetor[i] = INT_MAX;
    }
}

Boolean vetor_insert(Vetor* v, DataType element, int index){
    if(v->size < v->length){
       
        if(v->vetor[index] == INT_MAX){
            printf("Posição ocupada\n");
            return False;
        }else{
            v->vetor[index] = element;
            v->size++;
            return True;
        }

    }else{
        printf("Vetor cheio\n");
        vetor_expand(v);
        return False;
    }

}