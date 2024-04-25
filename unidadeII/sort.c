#include <stdbool.h>

// interativo crescente
bool ordenado1(int *v, int n){
    for(int i = 1; i < n; i++){
        if(v[i-1] > v[i]){
            return false;
        }
    }
    return true;
}

// interativo decrescente
bool ordenado2(int *v, int n){
    for(int i = 1; i < n; i++){
        if(v[i-1] < v[i]){
            return false;
        }
    }
    return true;
}

// ordenado recursivo crescente
bool ordenado3(int *v, int n){
    if(n <= 1){
        return true;
    }
    
    if (v[0] <= v[1]){
        return ordenado3(v+1, n-1);   
    }

    return false;
}

 int main(){

     int v1[] = {1, 2, 3, 3, 4, 5};
     int v2[] = {5, 4, 3, 3, 2, 1};
    
     printf("%d\n", ordenadoCrescente(v1, 5));
     printf("%d\n", ordenadoCrescente(v2, 5));


     printf("%d\n", ordenadoDecrescente(v1, 5));
     printf("%d\n", ordenadoDecrescente(v2, 5));

     printf("%d\n", ordenadoRecursivo(v1, 5));
     printf("%d\n", ordenadoRecursivo(v2, 5));

     return 0;
 }