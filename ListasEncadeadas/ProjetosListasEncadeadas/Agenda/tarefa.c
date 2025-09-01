#include "tarefa.h"
#include "auxiliares.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

Tarefa* cria_tarefa(const char* nome, int prioridade, const char* data){
    Tarefa* tarefa = malloc(sizeof(Tarefa));

    if(!tarefa){
        printf("Erro ao criar tarefa!\n");
        return NULL;
    }

    strncpy(tarefa->nome, nome, sizeof(tarefa->nome) - 1);
    tarefa->nome[sizeof(tarefa->nome) - 1] = '\0';

    tarefa->prioridade = prioridade;

    strncpy(tarefa->data, data, sizeof(tarefa->data) - 1);
    tarefa->data[sizeof(tarefa->data) - 1] = '\0';

    if(formatarData(tarefa->data) == 1){
        printf("Erro ao formatar data!\n");
        free(tarefa);
        return NULL;
    }

    tarefa->next = NULL;

    return tarefa;
}

Lista* cria_lista(){
    Lista* lista = malloc(sizeof(Lista));
    
    if(!lista){
        printf("Erro criar lista!\n");
        return NULL;
    }

    lista->inicio = NULL;
    lista->tamanho = 0;

    return lista;
}

bool insercao_lista(Lista* lista, const char* nome, int prioridade, const char* data){
    Tarefa* nova = cria_tarefa(nome, prioridade, data);
    if(!nova){
        printf("Erro ao criar tarefa!\n");
        return false;
    }

    if(lista->inicio == NULL){
        lista->inicio = nova;
    } 
    else {
        Tarefa* atual = lista->inicio;
        while(atual->next != NULL){
            atual = atual->next;
        }
        atual->next = nova;  
    }

    return true;
}