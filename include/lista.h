#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

// Definição do Nó
typedef struct No {
    int valor;
    struct No* proximo;
} No;

// Definição da Lista
typedef struct Lista {
    No* inicio;
} Lista;

// Protótipos das funções
void inicializar(Lista* lista);
void inserir_inicio(Lista* lista, int valor);
void inserir_fim(Lista* lista, int valor);
void imprimir_lista(Lista* lista);

#endif