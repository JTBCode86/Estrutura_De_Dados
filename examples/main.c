#include <stdio.h>
#include <stdlib.h>
#include "../include/lista.h"

int main() {
    Lista minha_lista;
    
    // 1. Inicializa
    inicializar(&minha_lista);

    // 2. Insere alguns valores
    inserir_inicio(&minha_lista, 10);
    inserir_inicio(&minha_lista, 20);
    inserir_inicio(&minha_lista, 30);
    
    // 3. Testa a nova função de inserir no fim
    inserir_fim(&minha_lista, 5);
    inserir_fim(&minha_lista, 1);

    // 4. Mostra o resultado
    printf("Conteudo da Lista Encadeada:\n");
    imprimir_lista(&minha_lista);

    // Resultado esperado: 30 -> 20 -> 10 -> 5 -> 1 -> NULL

    system("PAUSE"); // Mantém o terminal aberto no Dev-C++
    return 0;
}