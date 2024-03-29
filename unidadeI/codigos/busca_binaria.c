#include <stdio.h>
#include <stdbool.h>

// interativo
bool buscaBinaria1(int *v, int tam, int chave) {
    int inicio = 0;
    int fim = tam - 1;
    
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        
        if (v[meio] == chave) {
            return true;
        }
        
        if (v[meio] < chave) {
            inicio = meio + 1; // segunda métade
        } else {
            fim = meio - 1; // primeira metade
        }
    }
    return false; 
}

// recursivo
bool buscaBinaria2(int *v, int tam, int chave){
    if(tam <= 0){
        return 0;
    } 

    int meio = tam/2;

    if(v[meio] == chave){
        return true;
    }else if(v[meio] > chave){
        return buscaBinaria2(v, meio, chave); // primeira metade
    }else{
        return buscaBinaria2(v+meio+1, tam-meio-1, chave); // segunda metade
    }

}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tam = sizeof(v) / sizeof(v[0]);
    int chave = 0;

    if (buscaBinaria1(v, tam, chave)){
        printf("A chave %d foi encontrada\n", chave);
    } else {
        printf("A chave %d nao foi encontrada\n", chave);
    }

    if (buscaBinaria2(v, tam, chave)) {
        printf("A chave %d foi encontrada\n", chave);
    } else {
        printf("A chave %d nao foi encontrada\n", chave);
    }
    
    return 0;
}
