#ifndef AUXILIARES_H
#define AUXILIARES_H

/**
 * @brief Formata uma string de data de "DDMMAAAA" para "DD/MM/AAAA".
 * 
 * @param data String contendo a data a ser formatada. Deve ter pelo menos 8 caracteres.
 * @return 0 se a formatação foi bem-sucedida, 1 se a data for inválida.
 */
int formatarData(char *data);

#endif