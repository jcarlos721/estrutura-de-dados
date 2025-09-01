#ifndef TAREFA_H
#define TAREFA_H

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

#endif