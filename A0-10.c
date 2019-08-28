#include <stdio.h>

void main(){
    short int v1[] = {1,2,3};		//sugestão de endereço: 288
    short int v10[3] = {1,2,3};		//sugestão de endereço: 296
    short int *v2 =v1;			//sugestão de endereço: 304

    v2[0] = 10;
    *(v2+1) = 20;

    short int i;				//sugestão de endereço: 314
    for(i=0; i<3; i++){
        printf("%d ", v10[i]);
    }

}