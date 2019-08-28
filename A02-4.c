#include <stdio.h>

 void main(){
     short int m[3][3] = {{10,11,12}, {20,21,22}, {31,32,33}}; //sugestão de endereço: 96 

    printf("m: %u \n", m);
    printf("&m: %u \n", &m);

    printf("&m[0][0]: %u \n", &m[0][0]);
    printf("&m[0][1]: %u \n", &m[0][1]);
    printf("&m[1][0]: %u \n", &m[1][0]);
    printf("&m[1][1]: %u \n", &m[1][1]);
    printf("&m[2][0]: %u \n", &m[2][0]);
    printf("&m[2][1]: %u \n", &m[2][1]);

    printf("m+0: %u \n", m+0);
    printf("m+1: %u \n", m+1);
    printf("m+2: %u \n", m+2);

    printf("m[0]: %u \n", m[0]);
    printf("m[1]: %u \n", m[1]);
    printf("m[2]: %u \n", m[2]);

    printf("m[1]+0: %u \n", m[1]+0);
    printf("m[1]+1: %u \n", m[1]+1);
    printf("m[1]+2: %u \n", m[1]+2);

 }