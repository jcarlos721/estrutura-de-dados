#include "leitura.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Input* le_entrada(){
    
    Input *nova = malloc(sizeof(Input));

    if(!nova){
        printf("Erro ao alocar memoria!\n");
        return NULL;
    }

    if(fgets(nova->buffer, sizeof(nova->buffer), stdin) == NULL){
        free(nova);
        return NULL;
    }
    nova->buffer[strcspn(nova->buffer, "\n")] = '\0';
    
    return nova;

}



