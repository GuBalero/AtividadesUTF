#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * string_clone(char * str){
    char * copia = (char*) calloc(strlen(str), sizeof(char));
    strcpy(copia, str);
    
    return copia;
}

void main(){
    char str[20] = "ABC";

    char *copia = string_clone(str);
    printf("%s\n", copia);
}