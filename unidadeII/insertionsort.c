#include <stdio.h>

void troca(int *v, int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

void insertionsort(int *v, int n){
    for (int i = n-1; i > 0; i--){
        for (int j = i; (j < n-1 && v[j] > v[j+1]); j++){
            troca(v, j, j+1);
        }
    }
    
}

int main(){
    int v[] = {1, 5, 3, 5, 8, 4, 7, 9, 3, 4};

    insertionsort(v, 10);

    for (int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    
    return 0;
}