#include <stdio.h>
#include <stdbool.h>

void troca(int *v, int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

void bubblesort(int *v, int n){
    bool conflito;
    do{
        conflito = false;
        for(int i = 1; i < n; i++){
            if (v[i-1] > v[i]){
                troca(v, i-1, i);
                conflito = true;
            }
        }
    }while (conflito);
}

int main(){

    int v[] = {1,2, 6, 10, 3, 1};

    bubblesort(v, 6);

    for (int i = 0; i < 6; i++){
        printf("%d ", v[i]);
    }
    
    return 0;
}
