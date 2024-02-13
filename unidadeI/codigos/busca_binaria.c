#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool buscaBinaria(int *v, int tam, int chave) {
    int inicio = 0, fim = tam - 1, meio;

    while (inicio <= fim) {
        meio = floor((inicio + fim) / 2);

        if (v[meio] == chave) {
            return true;
        }

        if (v[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return false;
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tam = sizeof(v) / sizeof(v[0]);
    int chave = 0;

    if (buscaBinaria(v, tam, chave)) {
        printf("A chave %d foi encontrada\n", chave);
    } else {
        printf("A chave %d nao foi encontrada\n", chave);
    }

    return 0;
}
