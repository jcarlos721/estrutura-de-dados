#ifndef ARVORE_H
#define ARVORE_H

#include <stdbool.h>

/**
 * @struct _no
 * @brief Estrutura que representa um nó de árvore binária.
 *
 * Cada nó contém um valor inteiro e ponteiros para os filhos esquerdo e direito.
 */
typedef struct _no {
    int valor;          /**< Valor armazenado no nó */
    struct _no* esq;    /**< Ponteiro para o filho esquerdo */
    struct _no* dir;    /**< Ponteiro para o filho direito */
} No;

/**
 * @brief Cria um novo nó com o valor especificado.
 *
 * @param valor Valor inteiro que o nó irá armazenar.
 * @return Ponteiro para o nó criado ou NULL em caso de erro de alocação.
 */
No* cria_no(int valor);

/**
 * @brief Constroi recursivamente uma árvore binária a partir de uma string parentetizada.
 *
 * A função lê a string, criando os nós conforme os parênteses, vírgulas e números encontrados.
 * Usa recursão para construir os filhos esquerdo e direito.
 *
 * @param str Ponteiro para a posição atual da string. O ponteiro é avançado durante a leitura.
 * @return Ponteiro para a raiz da subárvore construída.
 */
No* constroi_arvore(char **str);

/**
 * @brief Realiza a travessia pré-ordem da árvore.
 *
 * A travessia segue a ordem: Nó atual -> Filho esquerdo -> Filho direito.
 *
 * @param raiz Ponteiro para a raiz da árvore ou subárvore.
 */
void pre_ordem(No* raiz);

/**
 * @brief Realiza a travessia em-ordem da árvore.
 *
 * A travessia segue a ordem: Filho esquerdo -> Nó atual -> Filho direito.
 *
 * @param raiz Ponteiro para a raiz da árvore ou subárvore.
 */
void em_ordem(No* raiz);

/**
 * @brief Libera recursivamente todos os nós de uma árvore binária.
 *
 * A função percorre a árvore em pós-ordem (filho esquerdo, filho direito, nó atual)
 * e libera cada nó alocado dinamicamente, evitando vazamentos de memória.
 *
 * @param raiz Ponteiro para a raiz da árvore ou subárvore a ser liberada.
 */
void libera_arvore(No* raiz);


#endif


