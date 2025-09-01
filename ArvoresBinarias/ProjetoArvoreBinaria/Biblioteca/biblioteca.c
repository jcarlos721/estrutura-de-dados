#include "biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

No* cria_no(int codigo, char* titulo, char* autor){
    No* no = calloc(1, sizeof(No));
    if(!no){
        printf("Erro ao criar no!\n");
        return NULL;
    }

    no->dado.codigo = codigo;

    strncpy(no->dado.titulo, titulo, sizeof(no->dado.titulo) - 1);
    no->dado.titulo[sizeof(no->dado.titulo) - 1] = '\0';

    strncpy(no->dado.autor, autor, sizeof(no->dado.autor) - 1);
    no->dado.autor[sizeof(no->dado.autor) - 1] = '\0';
    
    return no;
}

bool insere_livro(Raiz* T, int codigo, const char* titulo, const char* autor) {
    if (T == NULL) return false;

    No* z = cria_no(codigo, titulo, autor);
    if (z == NULL) return false;

    No* y = NULL;
    No* x = T->root;

    while (x != NULL) {
        if (x->dado.codigo == z->dado.codigo) {
            free(z); 
            return false;
        }

        y = x;
        x = (z->dado.codigo < x->dado.codigo) ? x->esq : x->dir;
    }

    z->parent = y;

    if (y == NULL)
        T->root = z;
    else if (z->dado.codigo < y->dado.codigo)
        y->esq = z;
    else
        y->dir = z;

    return true;
}

No* procura_livro(No* atual, int codigo){
    
    if(atual == NULL){
        return NULL;
    }

    if(atual->dado.codigo == codigo){
        return atual;
    }

    if(codigo < atual->dado.codigo){
        return procura_livro(atual->esq, codigo);
    } else{
        return procura_livro(atual->dir, codigo);
    }
}

void BinTree_pre(No* raiz){
    if(raiz){    
        printf("%d ", raiz->dado.codigo);
        BinTree_pre(raiz->esq);
        BinTree_pre(raiz->dir);
    }
}

void BinTree_in(No* raiz){
    if(raiz){
        BinTree_in(raiz->esq);
        printf("%d ", raiz->dado.codigo);
        BinTree_in(raiz->dir);
    }
}

void BinTree_pos(No* raiz){
    if(raiz){
        BinTree_pos(raiz->esq);
        BinTree_pos(raiz->dir);
        printf("%d ", raiz->dado.codigo);
    }    
}