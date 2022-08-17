/*

TAD: pilha estatica sequencial

Dados: números inteiros

Pilha de operações: cria_pilha, pilha_vazia, pilha_cheia, push, pop, le_topo, imprime_pilha, imprime_reverso, libera_pilha, palindromo, elimina_elem, par_e_impar

- Operações:
        cria_pilha:
                Entrada: nenhuma
                Pré-condição: nenhuma
                Processo: cria uma pilha e coloca no estado de vazia
                Saída: endereço da pilha criada
                Pós-condição: nenhuma

        pilha_vazia:
                Entrada: endereço da Pilha
                Pré-condição: nenhuma
                Processo: retorna se uma pilha está vazia.
                Saída: 0 para sucesso (vazia), -1 para falha
                Pós-condição: nenhuma

        pilha_cheia:
                Entrada: endereço da pilha
                Pré-condição: nenhuma
                Processo: verifica se a Pilha está cheia.
                Saída: 0 para sucesso (cheia), -1 (não está cheia)
                Pós-condição: nenhuma

        push:
                Entrada: endereço da Pilha e o elemento a inserir
                Pré-condição: Pilha existir e nao estar cheia
                Processo: insere um elemento no topo da Pilha
                Saída: 0 para sucesso (inseriu), -1 para falha
                Pós-condição: Pilha de entrada com um elemento a mais

        pop:
                Entrada: endereço da Pilha e o elemento a remover
                Pré-condição: pilha existir e nao estar vazia
                Processo: remove um elemento no topo da Pilha e retorna o valor ao usuario
                Saída: 0 para sucesso, -1 para falha
                Pós-condição: Pilha com um elemento a menos

        le_topo:
                Entrada: endereço da Pilha e o elemento a obter o valor
                Pré-condição: Pilha existir e nao estar vazia 
                Processo: retorna o valor do elemento no topo da pilha
                Saída: 0 para sucesso (obteve o valor), -1 para falha
                Pós-condição: nenhuma

        imprime_pilha:
                Entrada: endereço da Pilha
                Pré-condição: Pilha existir 
                Processo: imprime todos os elementos da pilha
                Saída: 0 (sucesso - pilha impressa com sucesso) ou -1 (falha - pilha não criada)
                Pós-condição: nenhuma

        imprime_reverso:
                Entrada: endereço da Pilha
                Pré-condição: Pilha existir 
                Processo: cria uma nova pilha, adiciona nela os valores contidos na pilha de entrada e imprime todos os elementos da pilha da nova pilha
                Saída: 0 (sucesso - pilha impressa com sucesso) ou -1 (falha - pilha não criada)
                Pós-condição: nenhuma

        libera_pilha:
                Entrada: endereço da Pilha
                Pré-condição: Pilha existir e não estar vazia
                Processo: decrementa a variável topo da pilha até não existir mais elementos
                Saída: 0 (sucesso - pilha liberada com sucesso) ou -1 (falha - pilha não liberada)
                Pós-condição: nenhuma

        palindromo:
                Entrada: vetor de char
                Pré-condição: pilha existir e a string não ser vazia
                Processo: divide a string ao meio e compara cada caracter do final com os do início
                Saída: 0 (sucesso - a palavra é um palíndromo) ou -1 (falha)
                Pós-condição: nenhuma

        elimina_elem:
                Entrada: endereço da pilha e o elemento a ser removido
                Pré-condição: Pilha existir e não estar vazia
                Processo: verifica se o topo da pilha é igual ao elemento a ser removido e o remove
                Saída: 0 (sucesso - elemento eliminado da pilha), -1 (falha) ou -2 (falha - elemento não existe na pilha)
                Pós-condição: pilha de entrada sem a(s) ocorrência(s) do elemento excluído

        par_e_impar:
                Entrada: endereço da Pilha
                Pré-condição: Pilha existir e não ser vazia 
                Processo: verifica se é par ou ímpar o topo da pilha e separa os elementos em duas outras pilhas
                Saída: 0 (sucesso - pares e ímpares separados) ou -1 (falha)
                Pós-condição: pilha par impressa e pilha ímpar impressa
*/

typedef struct pilha *Pilha;

Pilha cria_pilha();

int pilha_vazia(Pilha plh);

int pilha_cheia(Pilha plh);

int push(Pilha plh, int elem);

int pop(Pilha plh, int *elem);

int le_topo(Pilha plh, int *elem);

int imprime_pilha(Pilha plh);

int imprime_reverso(Pilha plh);

int libera_pilha(Pilha plh);

int palindromo(char *palavra);

int elimina_elem(Pilha plh, int elem);

int par_e_impar(Pilha plh);