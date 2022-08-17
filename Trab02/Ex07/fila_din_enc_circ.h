/*
TAD: Fila Dinâmica Encadeada Circular

- Dados: números inteiros

- Lista de operações: criar_fila, fila_vazia, insere_fila, remove_fila, imprime_fila

Operações:
    criar_fila:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma fila e deixa ela no estado de vazia
        Saída: endereço da fila criada
        Pós-condição: nenhuma

    fila_vazia:
        Entrada: entrada de uma fila
        Pré-condição: fila ser válida
        Processo: verifica se a fila está na condição de vazia
        Saída: 0 (sucesso - fila está vazia) ou -1 (falha - fila não está vazia)
        Pós-condição: nenhuma

    insere_fila:
        Entrada: endereço de uma fila e o elemento a ser inserido
        Pré-condição: fila ser válida
        Processo: sempre insere elemento no final
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - falha ao inserir elemento)
        Pós-condição: fila de entrada com um elemento a mais

    remove_fila:
        Entrada: entrada de uma fila e uma variável para ter o retorno do elemento que foi excluído
        Pré-condição: fila ser válida e não estar vazia
        Processo: verifica se a lista não está na condição de vazia e remove o elemento
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - lista está vazia)
        Pós-condição: fila de entrada com um elemento a menos

    imprime_fila:
        Entrada: endereço de uma fila
        Pré-condição: fila ser válida
        Processo: percorre a fila e imprime cada um de seus elementos
        Saída: nenhuma
        Pós-condição: nenhuma

*/

typedef struct no *Fila;

Fila criar_fila();

int fila_vazia(Fila fil);

int insere_fila(Fila *fil, int elem);

int remove_fila(Fila *fil, int *elem);

void imprime_fila(Fila fil);