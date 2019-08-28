#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convencional(int n);
void inverso(int n, int * inversa);

void main(){
   // Teste de Caso 1
   printf("%d - %d\n", 123, convencional(123)); 
   printf("%d - %d\n", 857, convencional(857)); 

   //Teste de Caso 2
   int resultado;
   inverso(613, &resultado);
   printf("%d - %d\n", 613, resultado); 
   inverso(902, &resultado);
   printf("%d - %d\n", 902, resultado); 

}

void inverso(int n, int * inversa){
    int unidade, dezena, centena, r;

    if(n < 1000){
        centena = n/100;
        n -= centena*100;

        dezena = n/10;
        n -= dezena*10;

        unidade = n;

        r = (unidade*100)+(dezena*10)+centena;
        *inversa = r;        
    }
}

int convencional(int n){
    int unidade, dezena, centena, r;

    if(n < 1000){
        centena = n/100;
        n -= centena*100;

        dezena = n/10;
        n -= dezena*10;

        unidade = n;

        r = (unidade*100)+(dezena*10)+centena;
        return r;        
    }
}
