/*
TAD Conversão Decimal-Octal

- Dados: Números inteiros
- Lista de operações: cria_pilha, pilha_vazia, push, pop, imprime_pilha, converte
Operações:
    cria_pilha:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma pilha e deixa ela no estado de vazia
        Saída: endereço da pilha criada
        Pós-condição: nenhuma

    pilha_vazia:
        Entrada: entrada de uma pilha
        Pré-condição: nenhuma
        Processo: verifica se a pilha está na condição de vazia
        Saída: 0 (sucesso - pilha está vazia) ou -1 (falha - pilha não está vazia)
        Pós-condição: nenhuma

    push:
        Entrada: endereço da pilha e o elemento a ser inserido
        Pré-condição: nenhuma
        Processo: insere elemento no topo da pilha
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: pilha de entrada com um elemento a mais

    pop:
        Entrada: endereço da pilha e um ponteiro para o elemento
        Pré-condição: pilha nao estar vazia
        Processo: remove o elemento do topo da pilha e retorna o valor em uma variável
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: pilha de entrada com um elemento a menos

    imprime_pilha:
        Entrada: endereço de uma pilha
        Pré-condição: nenhuma
        Processo: desempilha os elementos da pilha imprimindo-os e empilhando numa pilha auxiliar,
        depois desempilha da pilha auxiliar e empilha na pilha principal novamente. 
        Saída: nenhuma
        Pós-condição: nenhuma

    converte:
        Entrada: número decimal inteiro positivo 
        Pré-condição: número ser válido
        Processo: pega o resto da divisão por oito do número de entrada e o empilha e depois divide ele por 8
        Saída: nenhuma
        Pós-condição: pilha criada com os restos das divisões
*/

typedef struct no* Pilha;

Pilha cria_pilha();

int pilha_vazia(Pilha plh);

int push(Pilha *plh, int elem);

int pop(Pilha *plh, int *elem);

void imprime_pilha(Pilha plh);

void converte(int dec);