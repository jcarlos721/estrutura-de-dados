#include "arvore.h"
#include "leitura.h"
#include <stdio.h>
#include <stdlib.h>

No* cria_no(int valor){

    No *novo = calloc(1, sizeof(No));

    if(!novo){
        printf("Erro ao alocar no!\n");
        return NULL;
    }

    novo->valor = valor; 
    return novo;
}

bool insere_no(Raiz* T, int valor) {
    if (T == NULL) return false;

    No* novo = cria_no(valor);
    if (novo == NULL) return false;

    No* pai = NULL;
    No* atual = T->raiz;

    while (atual != NULL) {
        pai = atual;
        if (valor == atual->valor) {
            free(novo);
            return false; 
        }
        atual = (valor < atual->valor) ? atual->esq : atual->dir;
    }

    novo->p = pai;

    if (pai == NULL)
        T->raiz = novo; 
    else if (valor < pai->valor)
        pai->esq = novo;
    else
        pai->dir = novo;

    return true;
}
