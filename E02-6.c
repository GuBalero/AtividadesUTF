#include <stdio.h>

void main(){
    int x = 20;   		//sugestão de endereço: 160
    int *p1 = &x;		//sugestão de endereço: 168
    int **p2 = &p1;	//sugestão de endereço: 176
    int ***p3 = &p2;	//sugestão de endereço: 184

    printf("x: %d \n", x);
    printf("&x: %d \n", &x);
    printf("size x: %d\n", sizeof(x));

    printf("p1: %d \n", p1);
    printf("&p1: %d \n", &p1);
    printf("*p1: %d \n", *p1);

    printf("p2: %d \n", p2);
    printf("&p2: %d \n", &p2);
    printf("*p2: %d \n", *p2);
    printf("**p2: %d \n", **p2);

    printf("p3: %d \n", p3);
    printf("&p3: %d \n", &p3);
    printf("*p3: %d \n", *p3);
    printf("**p3: %d \n", **p3);
    printf("***p3: %d \n", ***p3);
}