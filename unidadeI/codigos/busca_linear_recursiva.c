#include <stdio.h>
#include <stdbool.h>

bool buscaLinear(int *v, int tam, int chave) {
    if (tam < 0) {
        return false;
    }

    if (v[tam - 1] == chave) {
        return true;
    }

    return buscaLinear(v, tam - 1, chave);
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int chave = 5;

    if (buscaLinear(v, 10, chave)) {
        printf("A chave %d foi encontrada no vetor\n", chave);
    } else {
        printf("A chave %d não foi encontrada no vetor\n", chave);
    }

    return 0;
}
