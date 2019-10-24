#include <stdio.h>

int fatorial(int n){
    if(n <= 0) return 1;
    else return fatorial(n-1) * n;
}

void main(){
    
    int n = 6;

    printf("%d", fatorial(n));

}