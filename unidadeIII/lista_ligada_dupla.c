#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    char dado;
    struct no *prox;
    struct no *ant;
} no;

void inserir_inicio(no **i, no **f, char el) {
    no *novo_no = (no *)malloc(sizeof(no));
    if (!novo_no) return;

    novo_no->dado = el;
    novo_no->prox = *i; 
    novo_no->ant = NULL; 

    if (*i) {
        (*i)->ant = novo_no; 
    } else {
        *f = novo_no;
    }
    
    *i = novo_no;
}

void inserir_fim(no **i, no **f, char el) {
    no *novo_no = (no *)malloc(sizeof(no));
    if (!novo_no) return;

    novo_no->dado = el;
    novo_no->prox = NULL;
    novo_no->ant = *f;

    if (*f) {
        (*f)->prox = novo_no;
    } else {
        *i = novo_no;
    }
    
    *f = novo_no; 
}

void inserir(no **i, no **f, char el, int pos) {
    if (pos == 0) {
        inserir_inicio(i, f, el);
        return;
    }

    no *novo_no = (no *)malloc(sizeof(no));
    if (!novo_no) return;
    
    novo_no->dado = el;
    no *temp = *i;

    for (int j = 0; j < pos - 1 && temp != NULL; j++) {
        temp = temp->prox;
    }

    if (temp == NULL) {
        inserir_fim(i, f, el);
    } else {
        novo_no->prox = temp->prox;
        novo_no->ant = temp; 

        if (temp->prox) {
            temp->prox->ant = novo_no; 
        } else {
            *f = novo_no; 
        }

        temp->prox = novo_no;
    }
}

void remocao_inicio(no **i, no **f) {
    if (!*i) return;

    no *temp = *i;
    *i = (*i)->prox;

    if (*i) {
        (*i)->ant = NULL; 
    } else {
        *f = NULL; 
    }

    free(temp);
}

void remocao_fim(no **i, no **f) {
    if (!*f) return; 

    no *temp = *f;
    *f = (*f)->ant;

    if (*f) {
        (*f)->prox = NULL;
    } else {
        *i = NULL; 
    }

    free(temp);
}

void remocao(no **i, no **f, int pos) {
    if (pos == 0) {
        remocao_inicio(i, f);
        return;
    }

    no *temp = *i;

    for (int j = 0; j < pos && temp != NULL; j++) {
        temp = temp->prox; 
    }

    if (temp == NULL) return;

    if (temp->ant) {
        temp->ant->prox = temp->prox;
    }

    if (temp->prox) {
        temp->prox->ant = temp->ant;
    } else {
        *f = temp->ant; 
    }

    free(temp); 
}

char acesso_inicio(no *i) {
    if (!i) return ' '; //se a lista estiver vazia
    return i->dado;
}

char acesso_fim(no *f) {
    if (!f) return ' '; //se a lista estiver vazia
    return f->dado;
}

char acesso(no *i, int pos) {
    no *temp = i;
    for (int j = 0; j < pos; j++) {
        temp = temp->prox;
    }
    return temp->dado;
}

int main() {

    return 0;
}
