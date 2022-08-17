//TAD Pilha;
typedef struct pilha* Pilha;

        /*Dados: números inteiros
        Pilha de operações: cria_pilha, pilha_vazia, pilha_cheia, push, pop, le_topo.

Operações:
Operação cria_pilha:*/
Pilha cria_pilha();
/*Entrada: nenhuma
Pré-condição: nenhuma
Processo: cria uma pilha e coloca no estado de vazia
Saída: endereço da pilha criada
Pós-condição: nenhuma

Operação pilha_vazia:*/
int pilha_vazia(Pilha plh);
/*Entrada: endereço da Pilha
Pré-condição: nenhuma
Processo: retorna se uma pilha está vazia.
Saída: 0 para sucesso (vazia), -1 para falha
Pós-condição: nenhuma

Operação pilha_cheia:*/
int pilha_cheia(Pilha plh);
/*Entrada: endereço da pilha
Pré-condição: nenhuma
Processo: verifica se a Pilha está cheia.
Saída: 0 para sucesso (cheia), -1 para falha
Pós-condição: nenhuma

Operação push:*/
int push(Pilha plh, int elem);
/*Entrada: endereço da Pilha e o elemento a inserir
Pré-condição: Pilha existir e nao estar cheia
Processo: insere um elemento no topo da Pilha
Saída: 0 para sucesso (inseriu), -1 para falha
Pós-condição: Pilha de entrada com um elemento a mais

Operação pop:*/
int pop(Pilha plh, int *elem);
/*Entrada: endereço da Pilha e o elemento a remover
Pré-condição: pilha existir e nao estar vazia
Processo: remove um elemento no topo da Pilha e retorna o valor ao usuario
Saída: 0 para sucesso, -1 para falha
Pós-condição: Pilha com um elemento a menos

Operação le_topo:*/
int le_topo(Pilha plh, int *elem);
/*Entrada: endereço da Pilha e o elemento a obter o valor
Pré-condição: Pilha existir e nao estar vazia 
Processo: retorna o valor do elemento no topo da pilha
Saída: 0 para sucesso (obteve o valor), -1 para falha
Pós-condição: nenhuma

Operação imprime_pilha:*/
int imprime_pilha(Pilha plh);
/*Entrada: endereço da Pilha
Pré-condição: Pilha existir 
Processo: imprime a Pilha com os valores inseridos
Saída: retorna o endereco da lista
Pós-condição: nenhuma*/