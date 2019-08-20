#include <stdio.h>
#define N 6

void sacar(float valor, int * notas);

void main(){
    float valor=27;
    int notas[N]; //NOTAS NO VETOR: 0 = 100; 1 = 50; 2 = 20; 3 = 10; 4 = 5; 5 = 2;
    sacar(valor, notas);
}

void sacar(float valor, int * notas){
    int saque[N] = {0}, valores[6] = {100,50,20,10,5,2};

    for(int i=0; i<N; i++){
        if(valor > 0){
            saque[i] = valor/valores[i];
            valor -= saque[i] * valores[i];
        }else{
            break;
        }
    }

     for(int i=0; i<N; i++){
         printf("%d: %d\n", valores[i], saque[i]);
     }

}