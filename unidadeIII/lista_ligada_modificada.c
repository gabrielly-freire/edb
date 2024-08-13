#include <stdio.h>

typedef struct no{
   char dado;
   struct no * prox;
} no;

char acesso_inicio(no *i) {
    if (!i) {
        return;
    }
    return i->dado;
}

char acesso_fim(no *f) {
    if (!f) {
        return;
    }
    return f->dado;
}

char acesso(no *i, int pos) {
    no *temp = i;
    for (int j = 0; j < pos; j++) {
        temp = temp->prox;
    }
    return temp->dado;
}


void inserir_inicio(no **i, no **f, char el){
    no *temp = (no *)malloc(sizeof(no));
    temp->dado = el;
    temp->prox = *i;
    *i=temp;
    if(!*f){
        *f = temp;
    }
}

void inserir_fim(no **i, no **f, char el){
    if(!*f){
        inserir_inicio(i, f, el);
    }else{
        (*f)->prox = (no *)malloc(sizeof(no));
        *f = (*f)->prox;
        (*f)->prox = NULL;
        (*f)->dado = el;
    }    
}

void remocao_inicio(no **i, no **f){
    if(!*i){
        return;
    }
    no *temp = *i;
    *i = (*i)->prox;
    free(temp);
    if(!*i){
        *f = NULL;
    }
}

void remocao_fim(no **i, no **f){
    if (!*f) {
        return;
    }

    no *temp = *i;
    while (temp->prox != *f) {
        temp = temp->prox;
    }
    
    free(*f);
    *f = temp;
    (*f)->prox = NULL;
}

int main(){

    return 0;
}