#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char dado;
    struct no * prox;
} no;

void acesso(no *s, int pos){
    no *temp = s;
    for (int i = 0; i < pos; i++){
       temp = temp->prox;
    }

    return temp->dado;
}

void acesso_inicio(no *s){
    if (!s){
       return;
    }
    return s->dado;
}

void acesso_fim(no *s){
    no *temp = s;
    while (s->prox != NULL){
       temp = temp->prox;
    }
    return temp->dado;
}

void inserir(no **s, int pos, char el){
    if(*s == NULL){
        inserir_inicio(s, el);        
    }else{
        no *it = *s;
        for (int i = 0; i < pos; i++){
            it = it->prox;
        }
        no *temp = (no*) malloc(sizeof(no));
        temp->dado=el;
        temp->prox = it->prox;
        *s = temp;
    }
}

void inserir_inicio(no **s, char el){
    no *temp = (no*) malloc(sizeof(no));
    temp->dado=el;
    temp->prox = *s;
    *s = temp; 
}

void inserir_fim(no **s, char el){
    if(*s == NULL){
        inserir_inicio(s, el);        
    }else{
        no *it = *s;
        while (it->prox != NULL){
            it->prox;
        }
        no *temp = (no*) malloc(sizeof(no));
        temp->dado=el;
        temp->prox = NULL;
        *s = temp;
    }
}

void remocao(no **s, int pos){
    if(!*s){
        return;
    }else if (!(*s)->prox){
        remocao_inicio(s);
    }else{
        no *it = *s;
        for (int i = 0; i < pos-1; i++){
            it = it->prox;
        }
        no *temp = it->prox;
        it->prox = it->prox->prox;
        free(temp);
    }
}

void remocao_inicio(no **s){
    if(!*s)
        return;

    no *temp = *s;
    *s = (*s)->prox;
    free(temp);
}

void remocao_fim(no **s){
    if(!*s){
        return;
    }else if (!(*s)->prox){
        remocao_inicio(s);
    }else{
        no *it = *s;
        while (it->prox->prox != NULL){
            it->prox;
        }
        no *temp = it->prox;
        it->prox = it->prox->prox;
        free(temp);
    }
}

int main(){

    return 0;
}