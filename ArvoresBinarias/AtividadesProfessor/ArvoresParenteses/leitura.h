#ifndef LETURA_H
#define LEITURA_H

typedef struct _input{
    char buffer[4096];
} Input; 

Input* le_entrada();

#endif