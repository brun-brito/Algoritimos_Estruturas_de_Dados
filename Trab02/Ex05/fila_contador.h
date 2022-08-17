//TAD Fila estatica sequencial Estratégia Contador
typedef struct fila* Fila;

        /*Dados: números inteiros
        Lista de operações: cria_fila, fila_vazia, fila_cheia, insere_fila, remove_fila e imprime_fila.

Operações:
Operação cria_fila:*/
Fila cria_fila();
/*Entrada: nenhuma
Pré-condição: nenhuma
Processo: cria uma fila e coloca no estado de vazia
Saída: endereço da fila criada
Pós-condição: nenhuma

Operação fila_vazia:*/
int fila_vazia(Fila fil);
/*Entrada: endereço da fila
Pré-condição: nenhuma
Processo: retorna se uma fila está vazia.
Saída: 0 para sucesso (vazia), -1 para falha
Pós-condição: nenhuma

Operação fila_cheia:*/
int fila_cheia(Fila fil);
/*Entrada: endereço da fila
Pré-condição: nenhuma
Processo: verifica se a fila está cheia.
Saída: 0 para sucesso (cheia), -1 para falha
Pós-condição: nenhuma

Operação insere_fila:*/
int insere_fila(Fila fil, int elem);
/*Entrada: endereço da fila e o elemento a inserir
Pré-condição: fila existir e nao estar cheia
Processo: insere um elemento no fim da fila
Saída: 0 para sucesso (inseriu), -1 para falha
Pós-condição: fila de entrada com um elemento a mais

Operação remove_fila:*/
int remove_fila(Fila fil, int *elem);
/*Entrada: endereço da fila e o elemento a remover
Pré-condição: fila existir e nao estar vazia
Processo: remove um elemento no inicio da fila e retorna o valor ao usuario
Saída: 0 para sucesso, -1 para falha
Pós-condição: fila com um elemento a menos

Operação imprime_fila:*/
int imprime_fila(Fila fil);
/*Entrada: endereço da fila
Pré-condição: fila existir 
Processo: imprime a fila com os valores inseridos
Saída: 0 para sucesso, -1 para falha
Pós-condição: nenhuma*/