#include "../include/lista.h"

// Inicializa a lista como vazia
void inicializar(Lista* lista) {
    lista->inicio = NULL;
}

// Insere um novo elemento no começo (Rápido)
void inserir_inicio(Lista* lista, int valor) {
    No* novo = (No*) malloc(sizeof(No));
    if (novo == NULL) return; // Falha na memória

    novo->valor = valor;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
}

// Insere um novo elemento no final (Precisa percorrer a lista)
void inserir_fim(Lista* lista, int valor) {
    No* novo = (No*) malloc(sizeof(No));
    if (novo == NULL) return;

    novo->valor = valor;
    novo->proximo = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo;
    } else {
        No* atual = lista->inicio;
        // Percorre até encontrar o último nó (aquele que aponta para NULL)
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        // Conecta o último nó ao novo nó
        atual->proximo = novo;
    }
}

// Imprime todos os elementos na tela
void imprimir_lista(Lista* lista) {
    No* atual = lista->inicio;
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL\n");
}