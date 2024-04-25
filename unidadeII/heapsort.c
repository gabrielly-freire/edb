#include <stdio.h>

void criaHeap(int *v, int i, int f){
    int aux = v[i];
    int j = i*2 + 1;
    while(j <= f){
        if(j < f){
            if(v[j] < v[j+1]){
                j = j + 1;
            }
        }
        if(aux < v[j]){
            v[i] = v[j];
            i = j;
            j = 2*i + 1;
        }else{
            j = f + 1;
        }
    }
    v[i] = aux;
}

void heapsort(int *v, int n){
    int aux;

    for(int i = (n-1)/2; i >= 0; i--){
        criaHeap(v, i, n-1);
    }

    for(int i = n-1; i >= 1; i--){
        aux = v[0];
        v[0] = v[i];
        v[i] = aux;
        criaHeap(v, 0, i-1);
    }
}

int main() {
    int v[] = {3, 2, 4, 5, 8, 1, 0, 9, 7};

    heapsort(v, 9);

    printf("Vetor ordenado: ");
    for(int i = 0; i < 9; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
