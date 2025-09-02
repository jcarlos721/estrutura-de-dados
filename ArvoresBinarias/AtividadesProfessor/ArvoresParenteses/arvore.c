#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

No* cria_no(int valor){
    No* novo = calloc(1, sizeof(No));
    if(!novo) return NULL;
    novo->valor = valor;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

No* constroi_arvore(char **str) {
    if(**str == '\0') return NULL;

    int valor = 0;
    while(**str >= '0' && **str <= '9') {
        valor = valor * 10 + (**str - '0');
        (*str)++;
    }

    No* novo = cria_no(valor);

    if(**str == '(') {
        (*str)++; 
        novo->esq = constroi_arvore(str);
    }

    if(**str == ',') {
        (*str)++;  
        novo->dir = constroi_arvore(str);
    }

    if(**str == ')') {
        (*str)++; 
    }

    return novo;
}

void pre_ordem(No* raiz) {
    if(raiz == NULL) return;
    printf("%d ", raiz->valor);
    pre_ordem(raiz->esq);
    pre_ordem(raiz->dir);
}

void em_ordem(No* raiz) {
    if(raiz == NULL) return;
    em_ordem(raiz->esq);
    printf("%d ", raiz->valor);
    em_ordem(raiz->dir);
}

void libera_arvore(No* raiz) {
    if(!raiz) return;
    libera_arvore(raiz->esq);
    libera_arvore(raiz->dir);
    free(raiz);
}


