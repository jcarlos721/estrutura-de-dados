#ifndef BIBLIOTECA
#define BIBLIOTECA

#include <stdbool.h>

/**
 * @struct Livro
 * @brief Estrutura que representa os dados de um livro.
 * 
 * Contém código, título e autor do livro.
 */
typedef struct _livro {
    int codigo;          /**< Código único do livro */
    char titulo[100];    /**< Título do livro */
    char autor[100];     /**< Autor do livro */
} Livro;

/**
 * @struct No
 * @brief Nó da árvore binária de busca.
 * 
 * Cada nó contém um livro e ponteiros para os filhos e o nó pai.
 */
typedef struct No {
    Livro dado;          /**< Dados do livro */
    struct No *esq;      /**< Ponteiro para o filho esquerdo */
    struct No *dir;      /**< Ponteiro para o filho direito */
    struct No *parent;   /**< Ponteiro para o nó pai */
} No;

/**
 * @struct Raiz
 * @brief Estrutura que representa a raiz da árvore.
 */
typedef struct _raiz{
    No *root;            /**< Ponteiro para o nó raiz da árvore */
} Raiz;

/**
 * @brief Cria um nó da árvore com os dados do livro.
 * 
 * Aloca memória para um novo nó, inicializa os campos com o código, título
 * e autor, e seta os ponteiros esq, dir e parent como NULL.
 * 
 * @param codigo Código único do livro.
 * @param titulo Título do livro.
 * @param autor Autor do livro.
 * @return No* Ponteiro para o nó criado. Retorna NULL em caso de falha.
 */
No* cria_no(int codigo, char* titulo, char* autor);

/**
 * @brief Insere um livro na árvore binária de busca.
 * 
 * A árvore é organizada pelo código do livro. Caso já exista um livro
 * com o mesmo código, a inserção é rejeitada.
 * 
 * @param T Ponteiro para a raiz da árvore.
 * @param codigo Código único do livro.
 * @param titulo Título do livro.
 * @param autor Autor do livro.
 * @return true Se a inserção foi bem-sucedida.
 * @return false Se ocorreu erro (árvore nula ou código duplicado).
 */
bool insere_livro(Raiz* T, int codigo, char* titulo, char* autor);

/**
 * @brief Procura um livro na árvore binária de busca pelo código.
 * 
 * Esta função realiza uma busca recursiva na árvore binária de busca, 
 * verificando se o nó atual possui o código desejado. Retorna o ponteiro 
 * para o nó que contém o livro ou NULL caso não seja encontrado.
 * 
 * @param atual Ponteiro para o nó atual da árvore (início da busca).
 * @param codigo Código do livro a ser procurado.
 * 
 * @return Ponteiro para o nó que contém o livro se encontrado; NULL caso contrário.
 */
No* procura_livro(No* atual, int codigo);

/**
 * @brief Percorre a árvore binária em pré-ordem.
 *
 * A travessia em pré-ordem segue a ordem:
 *   1. Visita a raiz.
 *   2. Percorre a subárvore esquerda.
 *   3. Percorre a subárvore direita.
 *
 * @param root Ponteiro para o nó raiz da árvore ou subárvore.
 */
void BinTree_pre(No* raiz);

/**
 * @brief Percorre a árvore binária em ordem (in-ordem).
 *
 * A travessia em ordem segue a ordem:
 *   1. Percorre a subárvore esquerda.
 *   2. Visita a raiz.
 *   3. Percorre a subárvore direita.
 *
 * @param root Ponteiro para o nó raiz da árvore ou subárvore.
 */
void BinTree_in(No* raiz);

/**
 * @brief Percorre a árvore binária em pós-ordem.
 *
 * A travessia em pós-ordem segue a ordem:
 *   1. Percorre a subárvore esquerda.
 *   2. Percorre a subárvore direita.
 *   3. Visita a raiz.
 *
 * @param root Ponteiro para o nó raiz da árvore ou subárvore.
 */
void BinTree_pos(No* raiz);

#endif
