#ifndef ARVORE_H
#define ARVORE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _no{
    int valor;
    struct _no* esq;
    struct _no* dir;
    struct _no* p;
} No;

typedef struct _raiz{
    No* raiz;
} Raiz;

No* cria_no(int valor);

bool insere_no(Raiz* T, int valor);

#endif