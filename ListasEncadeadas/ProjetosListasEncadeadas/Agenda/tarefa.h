#ifndef TAREFA_H
#define TAREFA_H
#include <stdbool.h>

/** 
 * @brief Estrutura que representa uma tarefa.
 * 
 * Cada tarefa possui um nome, prioridade, data e um ponteiro para a próxima tarefa
 * na lista encadeada.
 */
typedef struct Tarefa {
    char nome[50];       /**< Nome da tarefa (máx. 49 caracteres + '\0') */
    int prioridade;      /**< Prioridade da tarefa (quanto maior, mais importante) */
    char data[11];       /**< Data no formato DD/MM/AAAA */
    struct Tarefa *next; /**< Ponteiro para a próxima tarefa na lista */
} Tarefa;

/** 
 * @brief Estrutura que representa uma lista encadeada de tarefas.
 */
typedef struct _lista{
    Tarefa* inicio;  /**< Ponteiro para o primeiro elemento da lista */
    int tamanho;     /**< Número de tarefas na lista */
} Lista;

/**
 * @brief Cria uma nova tarefa.
 * 
 * @param nome Nome da tarefa.
 * @param prioridade Prioridade da tarefa.
 * @param data Data da tarefa no formato "DDMMAAAA".
 * @return Ponteiro para a tarefa criada ou NULL em caso de erro.
 */
Tarefa* cria_tarefa(const char* nome, int prioridade, const char* data);

/**
 * @brief Cria uma lista vazia de tarefas.
 * 
 * @return Ponteiro para a lista criada ou NULL em caso de erro.
 */
Lista* cria_lista();

/**
 * @brief Insere uma nova tarefa no final da lista encadeada.
 * 
 * Esta função cria uma nova tarefa com os dados fornecidos e a insere
 * no final da lista. Caso a lista esteja vazia, a nova tarefa se torna
 * o início da lista.
 * 
 * @param lista Ponteiro para a lista onde a tarefa será inserida.
 * @param nome Nome da tarefa a ser criada.
 * @param prioridade Prioridade da tarefa (número inteiro).
 * @param data Data associada à tarefa (string).
 * 
 * @return true Se a tarefa foi criada e inserida com sucesso.
 * @return false Se ocorreu algum erro na criação da tarefa.
 * 
 * @note O usuário deve garantir que o ponteiro lista não seja NULL.
 */
bool insercao_lista(Lista* lista, const char* nome, int prioridade, const char* data);

#endif