#include <stdio.h>
#define N 6

void sacar(int valor, int * notas);

void main(){
    int valor=666;
    int notas[N]; //NOTAS NO VETOR: 0 = 100; 1 = 50; 2 = 20; 3 = 10; 4 = 5; 5 = 2;
    sacar(valor, notas);
}

void sacar(int valor, int * notas){
    int saque[N] = {0}, valores[6] = {100,50,20,10,5,2};

    for(int i=0; i<N; i++){
        if(valor > 0){
            if(i == N-2){
                if(valor % 5 < 5){
                    continue;
                }
            }

            if(i == N-3){
                if(valor % 10 < 5){
                    continue;
                }
            }
       
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