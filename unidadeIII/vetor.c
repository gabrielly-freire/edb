#include <stdio.h>

char acesso(char *v, int n, int pos){
    return v[pos];
} 

int inserir(char *v, int n, int nMax, int pos, char el){
    if(n == nMax)
        return n;
    for(int i = n-1; i >= pos; i--) //abrindo espaço
        v[i+1] = v[i];

    v[pos] = el;
    return n+1;
}

int remocao(char *v, int n, int pos){
    if(n==0)
        return n;
    for(int i = pos; i <= n-2; i++) //prrenchendo espaço
        v[i] = v[i+1];
    return n-1;
}

int main(){

    return 0;
}