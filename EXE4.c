#include <stdio.h>
#include <string.h>

void traduzir(int dia, int mes, int ano, char * ex);

void main(){

    int dia=12, mes=12, ano=2019;
    char extenso [50];

    traduzir(dia, mes, ano, extenso);

    printf("%s", extenso);

}

void traduzir(int dia, int mes, int ano, char * ex){
    char extenso[50];

    ///////////// DIA /////////////////////////////

    if(dia == 1)
        strcat(extenso, "Um de ");
    else if(dia == 2)
        strcat(extenso, "Dois de ");
    else if(dia == 3)
        strcat(extenso, "Tres de ");
    else if(dia == 4)
        strcat(extenso, "Quatro de ");
    else if(dia == 5)
        strcat(extenso, "Cinco de ");
    else if(dia == 6)
        strcat(extenso, "Seis de ");
    else if(dia == 7)
        strcat(extenso, "Sete de ");
    else if(dia == 8)
        strcat(extenso, "Oito de ");
    else if(dia == 9)
        strcat(extenso, "Nove de ");
    else if(dia == 10)
        strcat(extenso, "Dez de ");
    else if(dia == 11)
        strcat(extenso, "Onze de ");
    else if(dia == 12)
        strcat(extenso, "Doze de ");
    else if(dia == 13)
        strcat(extenso, "Treze de ");
    else if(dia == 14)
        strcat(extenso, "Quatorze de ");
    else if(dia == 15)
        strcat(extenso, "Quinze de ");
    else if(dia == 16)
        strcat(extenso, "Dezesseis de ");
    else if(dia == 17)
        strcat(extenso, "Dezessete de ");
    else if(dia == 18)
        strcat(extenso, "Dezoito de ");
    else if(dia == 19)
        strcat(extenso, "Dezenove de ");
    else if(dia == 20)
        strcat(extenso, "Vinte de ");
    else if(dia == 21)
        strcat(extenso, "Vinte e um de ");
    else if(dia == 22)
        strcat(extenso, "Vinte e dois de ");
    else if(dia == 23)
        strcat(extenso, "Vinte e tres de ");
    else if(dia == 24)
        strcat(extenso, "Vinte e quatro de ");
    else if(dia == 25)
        strcat(extenso, "Vinte e cinco de ");
    else if(dia == 26)
        strcat(extenso, "Vinte e seis de ");
    else if(dia == 27)
        strcat(extenso, "Vinte e sete de ");
    else if(dia == 28)
        strcat(extenso, "Vinte e oito de ");
    else if(dia == 29)
        strcat(extenso, "Vinte e nove de ");
    else if(dia == 30)
        strcat(extenso, "Trinta de ");
    else if(dia == 31)
        strcat(extenso, "Trinta e um de ");

    //////////////////// MES ////////////////////////

    if(mes == 1)
        strcat(extenso, "janeiro de ");
    else if(mes == 2)
        strcat(extenso, "fevereiro de ");
    else if(mes == 3)
        strcat(extenso, "março de ");
    else if(mes == 4)
        strcat(extenso, "abril de ");
    else if(mes == 5)
        strcat(extenso, "maio de ");
    else if(mes == 6)
        strcat(extenso, "junho de ");
    else if(mes == 7)
        strcat(extenso, "julho de ");
    else if(mes == 8)
        strcat(extenso, "agosto de ");
    else if(mes == 9)
        strcat(extenso, "setembro de ");
    else if(mes == 10)
        strcat(extenso, "outubro de ");
    else if(mes == 11)
        strcat(extenso, "novembro de ");
    else if(mes == 12)
        strcat(extenso, "dezembro de ");

    ///////////////////// ANO ////////////////

    char anoString[4];
    sprintf(anoString, "%i", ano);
    strcat(extenso, anoString);

    /////////////////////////////////////////

    strcpy(ex, extenso);

}
