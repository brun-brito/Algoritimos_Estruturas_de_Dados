/*

TAD Pilha

   - Tipo de dados: número inteiro
   - Lista de operações: cria_pilha, pilha_vazia, push, pop, le_topo, imprime_pilha, imprime_reverso, libera_pilha, verifica_ palindromo, elimina_elem, par_e_impar

Operações:
        - cria_pilha:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma pilha e coloca no estado de vazia
        Saída: endereço da pilha criada
        Pós-condição: nenhuma

        - pilha_vazia:
        Entrada: endereço da pilha
        Pré-condição: nenhuma
        Processo: verifica se uma pilha está vazia
        Saída: 0 para sucesso (vazia), -1 para falha (não está vazia)
        Pós-condição: nenhuma

        - push:
        Entrada: endereço da pilha e o elemento a inserir
        Pré-condição: pilha existir
        Processo: insere um elemento no topo da pilha
        Saída: 0 para sucesso (inseriu), -1 para falha ao inserir
        Pós-condição: Pilha de entrada com um elemento a mais

        - pop:
        Entrada: endereço da pilha
        Pré-condição: pilha existir e nao estar vazia
        Processo: remove um elemento no topo da pilha e retorna o valor ao usuário
        Saída: 0 para sucesso, -1 para falha
        Pós-condição: pilha com um elemento a menos

        - le_topo:
        Entrada: endereço da pilha e uma variável de retorno
        Pré-condição: pilha existir e não estar vazia 
        Processo: retorna o valor do elemento do topo da pilha
        Saída: 0 para sucesso (obteve o valor), -1 para falha
        Pós-condição: nenhuma

        - imprime_pilha:
        Entrada: endereço da pilha
        Pré-condição: pilha existir 
        Processo: imprime os valores contidos na pilha
        Saída: nenhuma
        Pós-condição: nenhuma

        - imprime_reverso:
        Entrada: endereço da pilha
        Pré-condição: pilha existir 
        Processo: desempilha a pilha de entrada em uma segunda pilha criada e imprime a segunda pilha
        Saída: nenhuma
        Pós-condição: nenhuma

        - libera_pilha:
        Entrada: endereço da pilha
        Pré-condição: pilha existir e não estar vazia 
        Processo: exclui cada nó da pilha
        Saída: 0 (sucesso - pilha liberada) ou -1 (falha - pilha não liberada)
        Pós-condição: pilha de entrada apagada

        - verifica_palindromo:
        Entrada: vetor de char
        Pré-condição: vetor char nao ser vazio
        Processo: divide a string ao meio, cria uma pilha e empilha nela a primeira metade da string e após desempilha comparando cada caracter com a outra metade da string
        Saída: 0 (sucesso - a string é um palíndromo) ou -1 (falha - a string não é um palíndromo)
        Pós-condição: nenhuma

        - exclui_ocorrencias_elem:
        Entrada: endereço da pilha e o elemento a ser excluído
        Pré-condição: pilha existir e não estar vazia 
        Processo: desempilha a pilha de entrada comparando se o topo é igual ao elemento, se for exclui elemento
        Saída: 0 (sucesso - elemento excluído), -1 (falha - pilha vazia ou não criada) ou -2 (falha - elemento não pertence a pilha)
        Pós-condição: pilha de entrada sem a ocorrência do elemento

        - separa_par_e_impar:
        Entrada: endereço da pilha
        Pré-condição: pilha existir e não ser vazia
        Processo: desempilha a pilha de entrada comparando se o elemento é par ou ímpar
        Saída: 0 (sucesso - elementos separados) ou -1 (falha - erro ao separar elementos)
        Pós-condição: nenhuma
*/

typedef struct no *Pilha;

Pilha cria_pilha();

int pilha_vazia(Pilha plh);

int push(Pilha *plh, int elem);

int pop(Pilha *plh, int *elem);

int le_topo(Pilha plh, int *elem);

void imprime_pilha(Pilha plh);

void imprime_reverso(Pilha plh);

int liberar_pilha(Pilha *plh);

int verifica_palindromo(char *str);

int exclui_ocorrencias_elem(Pilha *plh, int elem);

int par_e_impar(Pilha *plh);