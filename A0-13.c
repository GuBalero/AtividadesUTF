#include <stdio.h>

void main(){
    short int v[4] = {10,20,30,40}; //sugestão de endereço: 384 
    short int* p = v + 1; 	      //sugestão de endereço: 398
    *p *=2;
    p++;
    *(p+1) = 5;
    printf("%d %d", p, p[3]);
}