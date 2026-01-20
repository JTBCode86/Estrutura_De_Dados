# 💻 Estruturas de Dados em C - Estudo e Implementação

Este repositório é dedicado ao estudo profundo de estruturas de dados e algoritmos utilizando a linguagem **C**. O foco principal é entender o gerenciamento de memória "baixo nível", manipulação de ponteiros e a aplicação de boas práticas de organização de código (modularização).

---

## 🎯 Objetivos do Projeto
- Implementar estruturas clássicas do zero, sem bibliotecas de alto nível.
- Aplicar conceitos de **Modularização** (separando interface `.h` de implementação `.c`).
- Analisar a complexidade algorítmica (**Big O Notation**).
- Dominar a alocação dinâmica de memória (`malloc`, `free`, `realloc`).

---

## 📂 Organização do Repositório

Seguindo uma estrutura profissional e organizada:

* **`include/`**: Arquivos de cabeçalho (`.h`) com as definições de tipos e protótipos de funções.
* **`src/`**: Implementação da lógica das estruturas (`.c`).
* **`examples/`**: Programas de exemplo que demonstram o uso das estruturas em cenários reais.
* **`tests/`**: Pequenos scripts ou programas para validar se as estruturas funcionam como esperado.

---

## 🛠️ Conteúdo Programático

### 1. Estruturas Lineares
- [ ] **Lista Encadeada Simples:** Inserção no início/fim, remoção e busca.
- [ ] **Lista Duplamente Encadeada:** Navegação bidirecional e remoção otimizada.
- [ ] **Pilha (Stack):** Conceito LIFO (Last In, First Out).
- [ ] **Fila (Queue):** Conceito FIFO (First In, First Out).

### 2. Estruturas Não-Lineares
- [ ] **Árvore Binária de Busca (BST):** Inserção, remoção e percursos (In-order, Pre-order, Post-order).
- [ ] **Árvore AVL:** Implementação de rotações para balanceamento.
- [ ] **Tabela Hash:** Funções de espalhamento e tratamento de colisões por encadeamento.
- [ ] **Grafos:** Representação por Listas de Adjacência e Busca em Profundidade (DFS).

### 3. Algoritmos de Ordenação e Busca
- [ ] Bubble Sort / Insertion Sort
- [ ] Quick Sort / Merge Sort
- [ ] Busca Binária

---

## 🚀 Como Compilar e Executar

Para compilar qualquer exemplo deste repositório usando o `gcc`, utilize o seguinte comando no terminal:

```bash
# Exemplo genérico de compilação
gcc -I./include src/nome_da_estrutura.c examples/main_exemplo.c -o programa

# Executando
./programa
