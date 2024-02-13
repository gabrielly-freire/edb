#include <stdio.h>
#include <stdbool.h>

bool buscaLinear(int *v, int chave){
    for(int i = 0; i < sizeof(v)/sizeof(v[0]) ; i++){
        if(v[i] == chave){
            return true;
        }
    }
    return false;
}

int main(){
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int chave = 5;

    if(buscaLinear(v, chave)){
        printf("A chave %d foi encontrada no vetor\n", chave);
    }else{
        printf("A chave %d não foi encontrada no vetor\n", chave);
    }
    return 0;
}