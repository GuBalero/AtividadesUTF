#include <stdio.h>

void main(){
    
    int i = 10;    //sugestão de endereço: 0
    char c = 'a';  //sugestão de endereço: 10
    float f = 2.5; //sugestão de endereço: 20

    printf("i: %d \n", i);
    printf("&i: %u \n", &i);

    printf("c: %c \n", c);
    printf("&c: %u' \n", &c);
    
    printf("f: %f \n", f);
    printf("&f: %u \n", &f);
}