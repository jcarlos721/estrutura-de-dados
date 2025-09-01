#include "auxiliares.h"
#include <stdio.h>
#include <string.h>

int formatarData(char *data){
    char buffer[11]; 

    if (strlen(data) < 8) {
        printf("Data inválida! Deve conter pelo menos 8 caracteres.\n");
        return 1;
    }

    snprintf(buffer, sizeof(buffer), "%.2s/%.2s/%.4s", data, data + 2, data + 4);

    strcpy(data, buffer);
    
    return 0;
}

