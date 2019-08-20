#include <stdio.h>

void potencia(int base, int expoente, int * res);

void main(){

    int base = 5, expoente = 2, resultado;
    potencia(base, expoente, &resultado);
    printf("%d", resultado);

}

void potencia(int base, int expoente, int * res){
    int r=base;
    
    for(int i = expoente-1; i>0; i--){
        r = r * base;
    }
    *res = r;
}