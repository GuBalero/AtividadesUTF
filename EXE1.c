#include <stdio.h>

void potencia(int base, int expoente, int * res);

void main(){

    int base = 4, expoente = 2, resultado;
    potencia(base, expoente, &resultado);
    printf("%d", resultado);

}

void potencia(int base, int expoente, int * res){
    int r=1;
    
    for(int i = expoente; i>0; i--){
        r = r * base;
    }
    *res = r;
}