#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool buscaBinaria(int *v, int inicio, int fim, int chave) {
    if (inicio > fim) {
        return false;
    }

    int meio = (inicio + fim) / 2;

    if (v[meio] == chave) {
        return true;
    } else if (v[meio] > chave) {
        return buscaBinaria(v, inicio, meio - 1, chave);
    } else {
        return buscaBinaria(v, meio + 1, fim, chave);
    }
}

int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = 10;
    int chave = 5;

    if (buscaBinaria(v, 0, 10, chave)){
        printf("A chave %d foi encontrada\n", i);
    }else{
        printf("A chave %d não foi encontrada\n", i);
    }

    return 0;
}