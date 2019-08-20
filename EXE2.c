#include <stdio.h>

void inverso(int n, int * inversa);

void main(){

    int n = 927, inversa;
    inverso(n, &inversa);
    printf("%d", inversa);

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