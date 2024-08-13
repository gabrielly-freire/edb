#include <stdio.h>

char acesso(char *v, int n, int n_max, int b, int pos){
    return v[(pos+b)%n_max];
}

void inserir_inicio(char *v, int *n, int *b, int n_max, int el){
    if(*n == n_max) // se o vetor está cheio
        return;

    *b = (*b - 1) % n_max;
    v[*b] = el;
    (*n)++;
}

void inserir_fim(char *v, int *n, int *b, int n_max, int el){
    if(*n == n_max)
        return;

    v[(*n+*b)%n_max] = el;
    (*n)++;
}

void remocao_inicio(char *v, int *n, int *b, int n_max){
    if(*n == 0) // se o vetor está vazio
        return;
    *b = (*b + 1) % n_max;
    (*n)--;
}

void remocao_fim(char *v, int *n, int *b, int n_max){
    if(*n == 0)
        return;
    (*n)--;
}


int main(){
    return;
}