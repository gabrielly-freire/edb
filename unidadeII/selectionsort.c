#include <stdio.h>
#include <stdbool.h>

void troca(int *v, int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

// retorna a posição do maior elemento
int argmax(int *v, int n){
    int indice = 0;

    for (int i = 0; i < n; i++){ 
        if(v[i] > v[indice]){
            indice = i;
        }
    }
    
    return indice;
}

void selectionsort(int *v, int n){  // O(n²)
    for (int i = n-1; i >= 0; i--){ // O(n)
        int max = argmax(v, i);     // O(n)
        troca(v, max, i);           // O(1)
    }
    
}

int main(){

    int v[] = {1, 5, 5, 2, 7, 3, 8, 9, 12, 6};

    selectionsort(v, 10);

    for (int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    

    return 0;
}