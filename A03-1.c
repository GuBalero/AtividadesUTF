#include <stdio.h>
#include <stdlib.h>

int recursivo(int base, int exp);
void potencia(int base, int expoente, int * res);

void main(){
    //Teste de Caso 1
    printf("%d ^ %d = %d\n", 5, 2, recursivo(5,2));
    printf("%d ^ %d = %d\n", 3, 3, recursivo(3,3));

    //Teste de Caso 2
    int resultado;

    potencia(2, 4, &resultado);
    printf("%d ^ %d = %d\n", 2, 4, resultado);
    potencia(10, 3, &resultado);
    printf("%d ^ %d = %d\n", 10, 3, resultado);

}

int recursivo(int base, int exp){
    if(abs(exp) == 0) return 1;
    return base * recursivo(base, abs(exp)-1);
}

void potencia(int base, int expoente, int * res){
    int r=1;
    
    for(int i = expoente; i>0; i--){
        r = r * base;
    }
    *res = r;
}