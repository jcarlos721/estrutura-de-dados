#ifndef LEITURA_H
#define LEITURA_H

/**
 * @struct _input
 * @brief Estrutura que armazena a entrada do usuário.
 *
 * Contém um buffer de caracteres capaz de armazenar até 4096 caracteres.
 */
typedef struct _input {
    char buffer[4096]; /**< Buffer que armazena a string lida do usuário */
} Input;

/**
 * @brief Lê uma linha da entrada padrão e retorna uma estrutura Input.
 *
 * A função aloca dinamicamente a estrutura Input e preenche o buffer
 * com a linha lida (até 4096 caracteres). Remove o caractere '\n' final.
 *
 * @return Ponteiro para a estrutura Input com a string lida.
 *         Retorna NULL em caso de erro de alocação ou leitura.
 */
Input* le_entrada();

#endif


