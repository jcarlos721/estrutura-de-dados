#include "leitura.h"
#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite a árvore parentetizada:\n");
    Input* entrada = le_entrada();
    if(!entrada) return 1;

    char* ponteiro = entrada->buffer;
    No* raiz = constroi_arvore(&ponteiro);

    printf("Pré-ordem: ");
    pre_ordem(raiz);
    printf("\n");

    printf("Em-ordem: ");
    em_ordem(raiz);
    printf("\n");

    free(entrada);
    libera_arvore(raiz);
    return 0;
}

