#include <stdio.h>
#include <stdbool.h>

// interativo crescente
bool buscaLinear1(int *v, int tam, int chave){
    for(int i = 0; i < tam; i++){
        if(v[i] == chave){
            return true;
        }
    }
    return false;
}

// interativo decrescente
bool buscaLinear2(int *v, int tam, int chave){
    for(int i = tam-1; i >= 0; i--){
        if(v[i] == chave){
            return true;
        }
    }
    return false;
}

// recursivo crescente
bool buscaLinear3(int *v, int tam, int chave){
    if(tam <= 0){
        return false;
    }else if(v[0] == chave){
        return true;
    }else{
        return buscaLinear3(v+1, tam-1, chave);
    }
}

// recursivo decrescente
bool buscaLinear4(int *v, int tam, int chave){
    if(tam <= 0){
        return false;
    }else if(v[tam-1] == chave){
        return true;
    }else{
        return buscaLinear4(v, tam-1, chave);
    }
}


int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int chave = 5;

    if(buscaLinear1(v, 10, chave)){
        printf("A chave %d foi encontrada no vetor\n", chave);
    }else{
        printf("A chave %d não foi encontrada no vetor\n", chave);
    }

    if(buscaLinear2(v, 10, chave)){
        printf("A chave %d foi encontrada no vetor\n", chave);
    }else{
        printf("A chave %d não foi encontrada no vetor\n", chave);
    }


    if(buscaLinear3(v, 10, chave)){
        printf("A chave %d foi encontrada no vetor\n", chave);
    }else{
        printf("A chave %d não foi encontrada no vetor\n", chave);
    }

    if(buscaLinear4(v, 10, chave)){
        printf("A chave %d foi encontrada no vetor\n", chave);
    }else{
        printf("A chave %d não foi encontrada no vetor\n", chave);
    }

    return 0;
}