#include <stdio.h>
#include <stdlib.h>

int *intercala_a(int * v1, int sizeV1, int * v2, int sizeV2);
void intercala_b(int * v1, int sizeV1, int * v2, int sizeV2, int * vetor);

void main(){
    int v1[3] = {2,4,6};
    int v2[4] = {3,5,7,9};

    int v3[7];
    int *v4;

    intercala_b(v1, 3, v2, 4, v3);
   v4 = intercala_a(v1, 3, v2, 4);

}

int * intercala_a(int * v1, int sizeV1, int * v2, int sizeV2){
    int * aux;

    for(int i = 0, j = 0, k = 0; i < sizeV1 || j < sizeV2; k++){
        
        if(i == sizeV1){
            aux[k] = v2[j];
            j++;
        
        }else if(j == sizeV2){
            aux[k] = v1[i];
            i++;
        
        }else{
            if(v1[i] < v2[j]){
                aux[k] = v1[i];
                i++;
            }else{
                aux[k] = v2[j];
                j++;
            }
        }
    }
    return aux;
}

void intercala_b(int * v1, int sizeV1, int * v2, int sizeV2, int * vetor){

    for(int i = 0, j = 0, k = 0; i < sizeV1 || j < sizeV2; k++){
        
        if(i == sizeV1){
            vetor[k] = v2[j];
            j++;
        
        }else if(j == sizeV2){
            vetor[k] = v1[i];
            i++;
        
        }else{
            if(v1[i] < v2[j]){
                vetor[k] = v1[i];
                i++;
            }else{
                vetor[k] = v2[j];
                j++;
            }
        }
    }
}