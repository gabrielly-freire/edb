#include <stdio.h>


void troca(int *v, int i, int qq){
    int aux = v[i];
    v[i] = v[qq];
    v[qq] = aux;
}

int separacao(int *v, int n){
    int pivo = v[0], pp= 1, qq = n - 1;

    while (qq > pp){
        while (v[pp] < pivo){
            pp++;
        }
        while (v[qq] > pivo){
            qq--;
        }
        if(pp < qq){
            troca(v, pp, qq);
        }
    }
    troca(v, 0, qq);
    return qq;
}

void quicksort(int *v, int n){
    if (n <= 1){
        return;
    }

    int meio = separacao(v, n);
    quicksort(v, meio);
    quicksort(v + meio + 1, n - meio - 1);
}

int main(){
    int v[] = {1, 2, 6, 10, 3, 1};

    quicksort(v, 6);

    for (int i= 0; i< 6; i++){
        printf("%d ", v[i]);
    }

    return 0;
}